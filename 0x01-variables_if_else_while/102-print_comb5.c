#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: is zero
 */

int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
int a = i / 10;
int b = i % 10;
int c = j / 10;
int d = j % 10;
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
if (!(i == 98 && j == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
