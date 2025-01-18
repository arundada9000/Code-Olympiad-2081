nested = {"a": {"b": {"c": 42}}}
print(nested["a"]["b"]["c"])  
nested["a"]["b"]["d"] = 100
print(nested)

# Output:
# Output: 42
# {'a': {'b': {'c': 42, 'd': 100}}}
