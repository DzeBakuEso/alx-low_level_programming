0x08. Recursion
Overview
This repository contains various tasks that involve writing recursive functions in C. Each task requires implementing a specific function to perform operations such as printing strings, calculating string length, computing factorials, raising numbers to powers, finding square roots, and checking for prime numbers.

Tasks
Task 0: She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
File: 0-puts_recursion.c

Function: void _puts_recursion(char *s);
Description: This function prints a string followed by a new line using recursion. It works similarly to the puts function in the standard library.
Task 1: Why is it so important to dream? Because, in my dreams we are together
File: 1-print_rev_recursion.c

Function: void _print_rev_recursion(char *s);
Description: This function prints a string in reverse using recursion. It starts from the end of the string and prints each character until it reaches the beginning.
Task 2: Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
File: 2-strlen_recursion.c

Function: int _strlen_recursion(char *s);
Description: This function returns the length of a string using recursion. It counts each character until it reaches the null terminator.
Task 3: You mustn't be afraid to dream a little bigger, darling
File: 3-factorial.c

Function: int factorial(int n);
Description: This function returns the factorial of a given number using recursion. If the number is lower than 0, the function returns -1 to indicate an error. The factorial of 0 is 1.
Task 4: Once an idea has taken hold of the brain it's almost impossible to eradicate
File: 4-pow_recursion.c

Function: int _pow_recursion(int x, int y);
Description: This function returns the value of x raised to the power of y using recursion. If y is lower than 0, the function returns -1.
Task 5: Your subconscious is looking for the dreamer
File: 5-sqrt_recursion.c

Function: int _sqrt_recursion(int n);
Description: This function returns the natural square root of a number using recursion. If the number does not have a natural square root, the function returns -1.
Task 6: Inception. Is it possible?
File: 6-is_prime_number.c

Function: int is_prime_number(int n);
Description: This function returns 1 if the input integer is a prime number, otherwise it returns 0. The function uses recursion to check if the number has any divisors other than 1 and itself.
Repository Information
GitHub repository: alx-low_level_programming
Directory: 0x08-recursion
