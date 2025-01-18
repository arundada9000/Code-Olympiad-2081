nums = [10, 20, 30, 40]
print(nums[-1], nums[-3])  
nums[1:3] = [99]
print(nums)  

# Output: 40 20
# Output: [10, 99, 40]