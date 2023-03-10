#include <stdio.h>
typedef struct {
    int num, den;
} Fraction;

void input(Fraction *f1, Fraction *f2,Fraction *f3);
void small(Fraction *f1,Fraction *f2,Fraction *f3,Fraction *s);
void output(Fraction *f1,Fraction *f2,Fraction *f3,Fraction *s);

int main ()
{
  Fraction fra1,fra2,fra3,*f1,*f2,*f3,sma,*s;
  f1 = &fra1;
  f2 = &fra2;
  f3 = &fra3;
  s = &sma;
  input(f1,f2,f3);
  small(f1,f2,f3,s);
  output(f1,f2,f3,s);
  return 0;
}

void input(Fraction *f1, Fraction *f2,Fraction *f3)
{
  printf("Enter num\n");
  scanf("%d",&f1->num);
  printf("Enter den\n");
  scanf("%d",&f1->den);
  printf("Enter num\n");
  scanf("%d",&f2->num);
  printf("Enter den\n");
  scanf("%d",&f2->den);
  printf("Enter num\n");
  scanf("%d",&f3->num);
  printf("Enter den\n");
  scanf("%d",&f3->den);
}

void small(Fraction *f1,Fraction *f2,Fraction *f3,Fraction *s)
{
  int den,n1,n2,n3;
  den = (f1->den)*(f2->den)*(f3->den);
  n1 = (f1->num)*den/f1->den;
  n2 = (f2->num)*den/f2->den;
  n3 = (f3->num)*den/f3->den;
  if(n1<=n2 && n2<=n3)
  {
    s-> num = f1->num;
    s-> num = f2->den;
  }
  else
  {
    s->num = f3->num;
    s->den = f3->den;
  }
}

void output(Fraction *f1,Fraction *f2,Fraction *f3,Fraction *s)
{
  printf("The smallest of %d/%d , %d/%d and %d/%d is %d/%d\n",f1->num,f1->den,f2->num,f2->den,f3->num,f3->den,s->num,s->den);
}