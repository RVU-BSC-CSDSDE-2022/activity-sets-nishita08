#include <stdio.h>
typedef struct fraction{
int num,den;
}Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n ,Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fraction(Fraction f1, Fraction f2);
Fraction add_n_fraction(int n, Fraction f[n]);
void output(int n,Fraction f[n] , Fraction sum);

int main ()
{
  int n = input_n();
  Fraction f[n],sum;
  input_n_fractions(n,f);
  sum = add_n_fraction(n,f);
  output(n,f,sum);
}

int input_n()
{
  int n;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  return n;
}

Fraction input_fraction()
{
  Fraction a;
  printf("Enter the fraction\n");
  scanf("%d%d",&a.num,&a.den);
  return a;
}

void input_n_fractions(int n ,Fraction f[n])
{
  for(int i=0; i<n; i++)
    {
      f[i] = input_fraction();
    }
}

int find_gcd(int a, int b)
{
  while(a != b)
    {
      if(a>b){a = a - b;}
      if(b>a){b = b - a;}
    }
  return a;
}

Fraction add_fraction(Fraction f1, Fraction f2)
{
  Fraction sum;
  if(f1.den == f2.den)
  {
    sum.num = f1.num + f2.num;
    sum.den = f1.den;
  }
  if(f1.den != f2.den)
  {
    sum.num = (f1.num*f2.den) 
+ 
(f2.num*f1.den);
    sum.den = (f1.den*f2.den);
  }
  return sum;
}

Fraction add_n_fraction(int n, Fraction f[n])
{
  Fraction sum = {f[0].num,f[0].den};
  for(int i=1; i<n; i++)
    {
      sum = add_fraction(sum,f[i]);
    }
  return sum;
}

void output(int n,Fraction f[n] , Fraction sum)
{
  int gcd = find_gcd(sum.num,sum.den);
  if(sum.num = sum.den)
  {
    printf("The sum of all fractions is 1");
  }
  sum.num = sum.num/gcd;
  sum.den = sum.den/gcd;
  {
    for(int i=0; i<n-1; i++)
      {
        printf("%d/%d + ",f[i].num,f[i].den);
      }
    printf("%d/%d = %d/%d",f[n-1].num,f[n-1].den,sum.num,sum.den);
  }
}