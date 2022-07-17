// Recursive 2cd calculation:

#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

void main()
{
    int a, b, g;
    char q;
    do
    {
        printf("\n Enter two nonnegative integers a and b: ");
        scanf("%d%d", &a, &b);
        g = gcd(a, b);
        printf("\n gcd(%d, %d)=%d", a, b, g);

        printf("\n Do you want to continue?(y/n): ");
        scanf("%c", &q);
    } while (q == 'y');
}
