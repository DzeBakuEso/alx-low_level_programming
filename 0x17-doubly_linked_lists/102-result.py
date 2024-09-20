#!/usr/bin/python3

def is_palindrome(n):
    """Check if the number n is a palindrome."""
    return str(n) == str(n)[::-1]

largest_palindrome = 0

# Iterate through all pairs of 3-digit numbers
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result in the file 102-result
with open('102-result', 'w') as f:
    f.write(str(largest_palindrome))
