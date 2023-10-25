#include "main.h"

/**
 * guessNo - helper function to determine square
 * multiples
 *
 * @n: square of guess
 * @guess: square root of n
 * Return: a square number or -1
 */
int guessNo(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (guessNo(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 *
 * @n: a number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	return (guessNo(n, 0));
}
