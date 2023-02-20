#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succcess)
 */

int main(void)
{
char c;
c = 'a';
while
(c <= 'Z') {
if (( c != '' && c != 'e') && c <= 'Z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
