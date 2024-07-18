#include "main.h"
/**
 * _sqrt_helper - Fonction auxiliaire récursive pour calcule
 * la racine carrée naturelle.
 * @n: Le nombre dont on veut calculer la racine carrée.
 * @guess: L'estimation courante de la racine carrée.
 *
 * Return: La racine carrée naturelle de n, ou -
 * 1 si n n'a pas de racine carrée naturelle.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
	return (guess);
	}
	else if (guess * guess > n)
	{
	return (-1);
	}
	else
	{
	return (_sqrt_helper(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - Calcule la racine carrée naturelle d'un nombre.
 * @n: Le nombre dont on veut calculer la racine carrée.
 *
 * Return: La racine carrée naturelle de n, ou -1
 * si n n'a pas de racine carrée naturelle.
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
	return (_sqrt_helper(n, 1));
}
