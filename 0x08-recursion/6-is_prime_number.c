#include "main.h"
int actual_prime(int n, int i);
/**
* is_prime_number - says if an integer is a prime number or otherwise
* @n: value to evaluate
* Return: if n is 1 return, and 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}
/**
* actual_prime - finds out if a given number is prime recursively
* @n: value to evaluate
* @i: iterator
* Return: if n is 1, return prime, if 0 do not return
*/
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
