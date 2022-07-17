// eculidean algorithm
#include <stdio.h>
void main()
{
	int a, b, x, y, r;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	x = a;
	y = b;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("The gcd(%d,%d) is %d", x, y, a);
}
