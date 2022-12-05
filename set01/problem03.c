#include<stdio.h>

int main ()
{
  int num1 , num2 , result;
  printf("\n Enter the two number");
  scanf("%d %d",&num1,&num2);
  result = add(num1,num2);
  printf("\n Addition of %d and %d is %d",num1,num2,result);
  
  return 1;
  }
  int add (int num 1, int num 2)
{
  int result;
  result = num1 + num2;
  return result;
  }