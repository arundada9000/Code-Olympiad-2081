items = [(1, 'one'), (3, 'three'), (2, 'two')]
items.sort(key=lambda x: x[0])
print(items)

# [(1, 'one'), (2, 'two'), (3, 'three')]