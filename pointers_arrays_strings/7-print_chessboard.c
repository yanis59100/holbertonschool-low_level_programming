#include "main.h"
/**
  * print_chessboard - prints out a chessboard
  *
  *@a: chessboard to print, 2D array [8] columns
  *
  * Return: Always void
  */
void print_chessboard(char (*a)[8])
{
	int chess, board = 0;

	while (board < 8)
	{
		chess = 0;
		while (chess < 8)
			_putchar(a[board][chess++]);
		_putchar('\n');
		board++;
	}
}
