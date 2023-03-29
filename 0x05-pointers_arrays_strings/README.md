# 0x05. C - Pointers, arrays and strings

## Description
What you should learn from this project is the following:

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

---

### [0-reset to 98.c](./0-reset_to_98.c)
* Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

### [1-swap.c](./1-swap.c)
* Write a function that swaps the values of two integers.

### [2-strlen.c](./2-strlen.c)
* Write a function that returns the length of a string.

### [3-puts.c](./3-puts.c)
* Write a function that prints a string, followed by a new line, to stdout.

### [4-print rev.c](./4-print_rev.c)
* Write a function that prints a string, in reverse, followed by a new line.

### [5-rev string.c](./5-rev_string.c)
* Write a function that reverses a string.

### [6-puts2.c](./6-puts2.c)
* Write a function that prints every other character of a string, starting with the first character, followed by a new line.

### [7-puts half.c](./7-puts_half.c)
* Write a function that prints half of a string, followed by a new line.

### [8-print array.c](./8-print_array.c)
* Write a function that prints n elements of an array of integers, followed by a new line.

### [9-strcpy.c](./9-strcpy.c)
* Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

### [100-atoi.c](./100-atoi.c)
* Write a function that convert a string to an integer.

    Prototype: int _atoi(char *s);
    The number in the string can be preceded by an infinite number of characters
    You need to take into account all the - and + signs before the number
    If there are no numbers in the string, the function must return 0
    You are not allowed to use long
    You are not allowed to declare new variables of “type” array
    You are not allowed to hard-code special values
    We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

### [101-keygen.c](./101-keygen.c)
* Create a program that generates random valid passwords for the program 101-crackme.

    You are allowed to use the standard library
    You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
    man srand, rand, time
    gdb and objdump can help

