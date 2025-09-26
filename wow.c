//hii ths is a test file for auto commit through vs code
//hii
// program for factorial of a number
#include <stdio.h>
int fact(int x)
{
  int factorial = 1;
  if (x == 0 || x == 1)
  {
    return 1;
  }
  for (int i = 1; i <= x; i++)
  {
    factorial = factorial * i;
  }
  return factorial;
}

int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d", &num);
  printf("The factorial of '%d' is : %d", num, fact(num));

  return 0;
}