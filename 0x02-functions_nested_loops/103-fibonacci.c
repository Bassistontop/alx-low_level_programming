#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
unsigned long int j, k, next, sum;
j = 1;
k = 2;
sum = 0;
for (j = 1; j <= 33; ++j)
{
if (j < 4000000 && (j % 2) == 0)
{
sum = sum + j;
}
next = j + k;
j = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}
