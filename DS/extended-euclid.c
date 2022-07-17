#include <stdio.h>

// Extended Echelon Algorithm

void main()
{
	int a, b, x, y, r;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	int s1, s2, t1, t2, q, s, d, t;
	x = a;
	y = b;

	s1 = 0, s2 = 1, t1 = 1, t2 = 0;
	while (b != 0)
	{
		q = a / b;
		r = a % b;
		s = s2 - q * s1;
		t = t2 - q * t1;
		a = b;
		b = r;
		s2 = s1;
		s1 = s;
		t2 = t1;
		t1 = t;
	}
	d = a;
	s = s2;
	t = t2;
	printf("The gcd(%d,%d) is %d", x, y, a);
	printf("\n%d = %d*%d + %d*%d", a, s, x, t, y);
}
