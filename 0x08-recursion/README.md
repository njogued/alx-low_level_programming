# Recursion

0. [Task 0](#task0)
1. [Task 1](#task1)
2. [Task 2](#task2)
3. [Task 3](#task3)
4. [Task 4](#task4)
5. [Task 5](#task5)
6. [Task 6](#task6)
7. [Task 7](#task7)
8. [Task 8](#task8)

## Task 0.<a name="task0"></a> She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function that prints a string, followed by a new line.
- Prototype: void \_puts_recursion(char \*s);
> FYI: The standard library provides a similar function: puts. Run man puts to learn more.

## Task 1.<a name="task1"></a> Why is it so important to dream? Because, in my dreams we are together
Write a function that prints a string in reverse.
- Prototype: void \_print_rev_recursion(char \*s);

## Task 2.<a name="task2"></a>  Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.
Prototype: int \_strlen_recursion(char \*s);
> FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

## Task 3.<a name="task3"></a> You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.
- Prototype: int factorial(int n);
- If n is lower than 0, the function should return -1 to indicate an error
- Factorial of 0 is 1

## Task 4.<a name="task4"></a> Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function that returns the value of x raised to the power of y.
- Prototype: int \_pow_recursion(int x, int y);
- If y is lower than 0, the function should return -1
> FYI: The standard library provides a different function: pow. Run ``` man pow ``` to learn more.

## Task 5.<a name="task5"></a> Your subconscious is looking for the dreamer
Write a function that returns the natural square root of a number.
- Prototype: int _sqrt_recursion(int n);
- If n does not have a natural square root, the function should return -1
> FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

## Task 6.<a name="task6"></a> Inception. Is it possible?
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
- Prototype: int is_prime_number(int n);

## Task 7.<a name="task7"></a> They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
Write a function that returns 1 if a string is a palindrome and 0 if not.
- Prototype: int is_palindrome(char *s);
- An empty string is a palindrome

## Task 8.<a name="task8"></a> Inception. Now, before you bother telling me it's impossible...
Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
- Prototype: int wildcmp(char *s1, char *s2);
- s2 can contain the special character *.
- The special char * can replace any string (including an empty string)
