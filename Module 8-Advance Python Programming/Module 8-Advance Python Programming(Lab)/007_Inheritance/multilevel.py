class Organism:
    def __init__(self, alive):
        self.alive = alive

class Animal(Organism):
    def __init__(self, name, alive):
      super().__init__(alive)
      self.name = name


class Dog(Animal):
    def bark(self):
        print("Bark!")

dog = Dog("Buddy", True)
print(dog.alive) # Output: True
dog.bark() # Output: Bark!