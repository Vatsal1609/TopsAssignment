
from django.urls import path,include
from myapp.views import *
urlpatterns = [
    
    path("",index,name="index"),

    # create path for accounts, cart, checkout, compare, details,login-register,shop,wishlist
    path("about",about,name="about"),
    path("contact",contact,name="contact"),
    path("service",service,name="service"),
    path("booking",booking,name="booking"),
    path("menu",menu,name="menu"),
    path("team",team,name="team"),
    path("testimonial",testimonial,name="testimonial"),


    # create path for search
    


    
]
