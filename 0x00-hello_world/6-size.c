#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, i, i_l, i_ll, f;
c = sizeof(char);
i = sizeof(int);
i_l = sizeof(long int);
i_ll = sizeof(long long int);
f = sizeof(float);
printf("Size of a char: %d byte(s)\n", c);
printf("Size of an int: %d byte(s)\n", i);
printf("Size of a long int: %d byte(s)\n", i_l);
printf("Size of a long long: %d byte(s)\n", i_ll);
printf("Size of a float: %d byte(s)\n", f);
return (0);
}
