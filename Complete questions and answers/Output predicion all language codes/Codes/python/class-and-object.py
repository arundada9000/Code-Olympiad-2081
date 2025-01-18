class Test:
    def __init__(self, x):
        self.x = x

    def update(self, y):
        self.x += y

obj = Test(5)
obj.update(10)
print(obj.x)  


# Output: 15