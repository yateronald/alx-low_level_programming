#include <stdio.h>
#include "main.h"
#include <<unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char c;
char s[] = "_putchar";
for (i = 0 ;i < 9 ;i++)
{
c = s[i];
_putchar(c);
}
return (0);
}
int _putchar(char c)
{
return (write(1, &c, 1));
}

