#!/usr/bin/env python3
import subprocess

import subprocess

def check_password(password):
    # Run the crackme4 program with the provided password
    result = subprocess.run(['python3', 'crackme4'], input=password, text=True, capture_output=True)
    # Print the output for debugging purposes
    print(f"Checking password: {password} -> Output: {result.stdout}")
    return "OK" in result.stdout

# Example of trying simple passwords
for password in range(10000):  # Adjust the range based on expected password complexity
    if check_password(str(password)):
        print(f"Found password: {password}")
        with open('100-password', 'w') as f:
            f.write(str(password))  # Save the found password
        break

