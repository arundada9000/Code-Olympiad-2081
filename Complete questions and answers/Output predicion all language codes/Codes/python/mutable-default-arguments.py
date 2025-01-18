def add_item(item, lst=[]):
    lst.append(item)
    return lst

print(add_item(1))  
print(add_item(2))  
print(add_item(3, [4]))  

# Output: [1]
# Output: [1, 2]
# Output: [4, 3]