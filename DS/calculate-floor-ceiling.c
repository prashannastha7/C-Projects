//  Calculating floor and ceiling:
#include <stdio.h>
#include <math.h>
void main()
{
     double x, f, c;
     char q;
     do
     {
          printf("\n Enter a number: ");
          scanf("%lf", &x);
          f = floor(x);
          c = ceil(x);
          printf("\n The floor and ceiling of %lf is %lf and %lf respectively.", x, f, c);
          printf("\n Do you want to continue?(y/n): ");
          scanf(" %c", &q);

     } while (q == 'y');
}
