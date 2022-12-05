#include<stdio.h>
#include<stdlib.h>
int add (int *a,int *b, int *sum)
{
  
  *sum= *a+*b;

}
int main()
{
  int a,b,sum;
  
  printf("enter first num");
  if(scanf("%d",&a)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("enter second num");
  if(scanf("%d",&b)!=1)
  {
    printf("error");
    exit(0);
  }
  add(&a,&b, &sum);
  printf("sum is %d", sum);
  
  return 0;
  }