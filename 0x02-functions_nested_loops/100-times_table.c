#include <stdio.h>

/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/

void print_times_table(int n)
{
if (n < 0 || n > 15)
{
printf("Invalid input.\n");
return;
}

int i, j, k;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = j * i;
if (j == 0)
{
printf("%d", k);
}
else if (k < 10 && j != 0)
{
printf(",   %d", k);
}
else if (k >= 10 && k < 100)
{
printf(",  %d", k);
}
else if (k >= 100)
{
printf(", %d", k);
}
}
printf("\n");
}
}
