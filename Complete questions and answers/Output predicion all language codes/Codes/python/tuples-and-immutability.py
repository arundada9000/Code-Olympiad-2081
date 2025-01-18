tup = (1, 2, 3)
try:
    tup[1] = 10
except TypeError as e:
    print(e)

# Output:
# 'tuple' object does not support item assignment
