#include <stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main ()
{
  int n;
  n = input_n();
  int a[n];
  input(n,a);
  float avg;
  avg = odd_average(n,a);
  output(avg);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}

void input(int n, int a[n])
{
  printf("Enter the number\n");
for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
}

float odd_average(int n, int a[n])
{
  int sum = 0;
  int count = 0;
  float avg;
  for(int i=0; i<n; i++)
    {
      if(a[i]%2!=0)
      {
        sum+=a[i];
        count+=1;
      }
    }
  avg = aum/count;
  return avg;
}

void output(float avg)
{
  printf("Average of all the odd numbers is %.0f\n",avg);
}