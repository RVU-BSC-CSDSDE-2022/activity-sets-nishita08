#include<stdio.h>
#include<math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  float n,sqr_rt;
  n=input();
  sqr_rt=square_root(n);
  output(n,sqr_rt);
}
float input()
{
  float n;
  printf("enter a number:");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float x0,x,sqr;
  x0=1;
  while((sqr*sqr) != n)
    {
      x=0.5*(x0+n/x0);
      if(x==x0)
      {
        sqr=x;
        break;
      }
      else
      {
        x0=x;
      }
    }
  return sqr;
}
void output(float n,float sqrroot)
{
  printf("square root of %f is %f",n,sqrroot);
}