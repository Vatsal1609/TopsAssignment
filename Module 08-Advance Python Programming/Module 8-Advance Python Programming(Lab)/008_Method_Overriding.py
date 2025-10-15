class Animal:
    def sound(self):
        print("Some generic animal sound")

class Dog(Animal):
    def sound(self):
        print("Bark")

class Cat(Animal):
    def sound(self):
        print("Meow")


a = Animal()
d = Dog()
c = Cat()

a.sound()  
d.sound()  
c.sound()  

