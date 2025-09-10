from django.shortcuts import render,redirect,HttpResponse
from django.contrib.auth.models import User
from django.contrib.auth import login,logout,authenticate
from django.contrib.auth.decorators import login_required
from django.http import JsonResponse
from myapp.models import *
from datetime import date
from django.core.mail import send_mail
from django.conf import settings


# Create your views here.

@login_required(login_url="login_register")
def account(request):
    return render(request, 'account.html')



@login_required(login_url="login_register")
def cart(request):
    return render(request, 'cart.html')

def login_register(request):
    return render(request, 'login_register.html')


# --------------------------------------------------------------------------------------------------------------------
# ---------------------------------------------------------------------------------------------------------------------


def userReg(request):
    try : 
        if request.method=='POST':
            data = request.POST
            username = data.get("username")
            email = data.get("email")
            password = data.get("password")

            u = User(username=username,email=email)
            u.set_password(password)
            u.save()
            return render(request,"login_register.html",{"rmessage":"Registration successfully"})
    except Exception as e:
            return render(request,"login_register.html",{"rerr":"Something went wrong"})


def userLogin(request):
    try : 
        if request.method=='POST':
            data = request.POST
            username = data.get("username")
            password = data.get("password")

            user = authenticate(username=username,password=password)
            if user is not None:
                login(request,user)
                return redirect("index")
            else:
                return render(request,"login_register.html",{"lmessage":"Invalid credentials"})
    except Exception as e:
            return render(request,"login_register.html",{"lerr":"Something went wrong"})


def userLogout(request):
    logout(request)
    return redirect("index")

def index(request):

    allCategories = Category.objects.all()
    allProducts = Product.objects.all()
    try :
        catid = request.GET['catid']
        allProducts = Product.objects.filter(category_id=catid)


        return render(request,"index.html",{"categories":allCategories,"products":allProducts})
    except Exception as e :
         return render(request,"index.html",{"categories":allCategories,"products":allProducts})
    

def product(request):
    allCategories = Category.objects.all()
    allProducts = Product.objects.all()
    try :
        catid = request.GET['catid']
        allProducts = Product.objects.filter(category_id=catid)


        return render(request,"product.html",{"categories":allCategories,"products":allProducts})
    except Exception as e :
         return render(request,"product.html",{"categories":allCategories,"products":allProducts})



def cart(request):

    carts = Cart.objects.filter(user=request.user)
    sum = 0
    for c in carts:
        sum+=(c.product.price*c.qty)

    return render(request,"cart.html",{"carts":carts,"sum":sum})


def addtocart(request):
    pid  =request.GET['pid']
    user = request.user
    if user.is_authenticated:
        product = Product.objects.get(pk=pid)

        cartitem = Cart.objects.filter(user=user,product=product)
        if cartitem:
            cartitem[0].qty=cartitem[0].qty+1
            cartitem[0].save()
            return HttpResponse("product added into cart !!!!")
        
        else :  
            Cart.objects.create(user=user,product=product)
            return HttpResponse("product added into cart !!!!")
    else:
        return HttpResponse(user)
    
def deletecart(request):
    cid = request.GET['cid']
    cart = Cart.objects.get(pk=cid)
    cart.delete()
    return HttpResponse("cart deleted !!!")


def changeqty(request):
    cid = request.GET['cid']
    qty = request.GET['qty']
    cart = Cart.objects.get(pk=cid)
    if  int(qty) <=0:
        cart.delete()
    else :
        cart.qty = qty
        cart.save() 
    return HttpResponse("qty updated !!!")


@login_required(login_url="login_register")
def checkout(request):
    carts = Cart.objects.filter(user=request.user)
    sum = 0
    for c in carts:
        sum+=(c.product.price*c.qty)
    print(sum)

    return render(request,"checkout.html",{"carts":carts,"sum":sum})


@login_required(login_url="login_register")
def address(request):
    address = request.GET['address']
    user = request.user

    Address.objects.create(user=user,address=address)
    return HttpResponse("address Added")

def get_address(request):
    allAddress = Address.objects.filter(user = request.user)
    return JsonResponse({"address":list(allAddress.values())})