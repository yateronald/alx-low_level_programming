
#include "main.h"
/**
 * swap_int - take two adress variable and swap it
 *
 *@a : for address vaiable a
 *@b : for address variable 2
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
