def test(x, lst=[]):
    lst.append(x)
    return lst

print(test(1))  
print(test(2, [3]))  
print(test(4))  

# Output: [1]
# Output: [3, 2]
# Output: [1, 4]