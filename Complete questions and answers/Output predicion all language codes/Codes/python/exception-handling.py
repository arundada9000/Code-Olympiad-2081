try:
    x = 10 / 0
except ZeroDivisionError:
    print("Division by zero!")
finally:
    print("End of try block.")

# Output:
# Division by zero!
# End of try block.
