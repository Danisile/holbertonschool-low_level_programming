#include <stdio.h>
/**
*main - Prints the sum of all multiples of 3 or 5 up to 1024
*
*Return: Always (Success)
*/
int main(void)
{
    int i, n = 0;
    int x = 1024;
    for (i = 0; i < x; i++)
    {
        if (((i % 5) == 0) || ((i % 3) == 0))
        {
            n = n + i;
        }
    }
    printf("%d\n", n);
    return (0);
}
