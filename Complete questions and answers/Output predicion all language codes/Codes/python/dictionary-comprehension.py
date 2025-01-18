keys = ['a', 'b', 'c']
values = [1, 2, 3]
result = {key: value for key, value in zip(keys, values)}
print(result)

# {'a': 1, 'b': 2, 'c': 3}