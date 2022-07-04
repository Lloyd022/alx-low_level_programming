#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */

int main(void)
{
int c = 2;
int d = 20;

while (d < 20)
{
c = 0;
while (c < 20)
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);
if (c + d != 18)
{
putchar(',');
putchar(' ');

}

c++;
}
d++;
}
putchar('\n');
return (0);
}
