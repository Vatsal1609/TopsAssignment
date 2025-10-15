class Demo:
    a = 10
    b = "hello"
    
    def disp(self):
        print("disp calling")
        print(self.a,self.b)


d = Demo()
d.a = 50

d1 = Demo()


d.disp()
d1.disp()