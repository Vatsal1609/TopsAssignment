class Vehicle:
    def start(self):
        print("Vehicle started")

class Car(Vehicle):
    def drive(self):
        print("Car driving")

class Bike(Vehicle):
    def ride(self):
        print("Bike riding")

car = Car()
car.start() 
car.drive() 

bike = Bike()
bike.start() 
bike.ride()