#include <stdio.h>
/**
 * main - prints the alphabets
 *
 * return: Always 0 (success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvrxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
