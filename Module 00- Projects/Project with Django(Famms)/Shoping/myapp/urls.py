from django.urls import path,include
from myapp.views import *
from django.conf import settings
from django.conf.urls.static import static


urlpatterns = [
    path('', index, name='index'),
    path('account/', account, name='account'),
    path('product/', product, name='product'),
    path('cart', cart, name='cart'),
    path('login_register/', login_register, name='login_register'),
    path('checkout/', checkout, name='checkout'),
 
    path("userReg",userReg,name="userReg"),
    path("userLogin",userLogin,name="userLogin"),
    path("userLogout",userLogout,name="userLogout"),

    path("addtocart",addtocart,name="addtocart"),
    path("deletecart",deletecart,name="deletecart"),
    path("changeqty",changeqty,name="changeqty"),


    path("account/address", address, name="address"),
    path("account/get-address", get_address, name="get-address"),
    path("checkout/get-address", get_address, name="get-address"),



]

urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)