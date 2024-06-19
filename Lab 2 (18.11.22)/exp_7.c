// Write a program to input any alphabet & check whether it is vowel or consonant

#include <stdio.h>

int main()
{

  char a;
  printf("Enter an Alphabet: ");
  scanf("%c", &a);

  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
  {
    printf("The Alphabet is a Vowel\n");
  }

  else if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
  {
    printf("The Alphabet is a Vowel\n");
  }

  else
  {
    printf("The Alphabet is a Consonant\n");
  }

  return 0;
}
