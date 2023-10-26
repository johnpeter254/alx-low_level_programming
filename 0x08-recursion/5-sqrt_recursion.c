#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to square root
 * Return: 1  if correct, -1 if num doesn't have square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sec_sqrt(n, 1));
}

/**
 * sec_sqrt - helper function to find squareroot recursively
 * @n: number
 * @guess: current estimate for the squareroot
 *
 * Return: squareroot of n, or -1
 */

int sec_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	if (guess * guess > n)
	{
		return (-1);
	}

	return (sec_sqrt(n, guess + 1));
}
