// Write a program to find the largest of 3 numbers using logical AND (&&) operator

#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter Ist number: ");
  scanf("\n%d", &a);
  printf("Enter IInd number: ");
  scanf("\n%d", &b);
  printf("Enter IIIrd number: ");
  scanf("\n%d", &c);

  if (a >= b && a >= c)
  {
    printf("%d is the largest of all\n", a);
  }

  else if (b >= a && b >= c)
  {
    printf("%d is the largest of all\n", b);
  }

  else
  {
    printf("%d is the largest of all\n", c);
  }

  return 0;
}
