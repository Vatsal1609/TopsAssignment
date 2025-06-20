class Swimmer:
    def swim(self):
        print("Swimming")

class Walker:
    def walk(self):
        print("Walking")

class Duck(Swimmer, Walker):
    pass

duck = Duck()
duck.swim()
duck.walk() 