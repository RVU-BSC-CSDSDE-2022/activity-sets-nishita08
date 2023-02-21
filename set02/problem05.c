#include<stdio.h>
#include<stdlib.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
  int a,b,gcd;
  a = input();
  b = input();
  gcd = find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}

int input()
{
  int x;
  printf("Enter the number\n");
  scanf("%d",&x);
  return(x);
}
int find_gcd(int a, int b)
{
  int i,gcd;
  for(i=1;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        gcd=i;
    }
  return(gcd);
}
void output(int a, int b, int gcd)
{
  printf("The GCD of %d and %d is %d\n",a,b,gcd);
}