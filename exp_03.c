// Write a program to find whether the number input by the user is even or odd

#include <stdio.h>

int main()
{
  int a;
  printf("Enter the number: ");
  scanf("\n%d", &a);

  if (a % 2 == 0)
  {
    printf("The number is even\n");
  }

  else
  {
    printf("The number is odd\n");
  }

  return 0;
}
