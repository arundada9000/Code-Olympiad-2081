nums = [3, 1, 4, 1, 5, 9]
nums.sort(key=lambda x: x % 3)
print(nums)

# Output: [3, 9, 1, 4, 1, 5]
