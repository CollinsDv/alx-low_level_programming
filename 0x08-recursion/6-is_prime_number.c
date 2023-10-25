#include "main.h"
/**
 * isDivisible - find in a number is divisible by its
 * predicessors
 * @n: suspected prime
 * @numb: predecessor value
 * Return: 0 or 1
 */
int isDivisible(int n, int numb)
{
	if (numb <= 1)
		return (1);
	if (n % numb == 0)
		return (0);

	return (isDivisible(n, numb - 1));
}

/**
 * is_prime_number - determines if a number is a prime
 * @n: interger
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (isDivisible(n, n - 1));
}
