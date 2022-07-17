//                Addition of two bit strings:

#include <stdio.h>
#include <math.h>
#define max 20

void main()
{
  int a[max], b[max], s[max], n;
  char q;
  do
  {
    int i, c, d;
    printf("\n Enter the length of bit strings ");
    scanf("%d", &n);
    printf("\nEnter first bit string, one bit at a time: ");
    for (i = n - 1; i >= 0; i--)
      scanf("%d", &a[i]);
    printf("\nEnter second bit string, one bit at a time: ");
    for (i = n - 1; i >= 0; i--)
      scanf("%d", &b[i]);
    c = 0;
    for (i = 0; i <= n - 1; i++)
    {

      d = floor((a[i] + b[i] + c) / 2),
      s[i] = a[i] + b[i] + c - (2 * d);
      c = d;
    }
    s[n] = c;
    printf("\n The sum of the bit strings is: ");
    for (i = n; i >= 0; i--)
      printf("%d", s[i]);
    printf("\n Do you want to continue?(y/n):");
    scanf(" %c", &q);
  } while (q == 'y');
}
