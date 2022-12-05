#include <stdio.h>
#include <stdlib.h>
int input()
{
 int v;
  printf("enter the numbers");
   if( scanf("%d", &v)!=1)
   {
     printf("error");
     exit(0);
   }
  return v;
}
int sum(int n)
{

 n=(n*(n+1))/2;//use for loop
  return n;

}

void output(int n, int add)
{
 printf("sum of n numbers is %d", add); //1+2+3+...+n = sum.
}

int main()
{int a=input();
  int c;
   c=sum(a);
 output(a,c);
 return 0;
}