#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int n);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
  int n, sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}

int input_array_size () {
  int a;
  printf("Enter the size of array\n");
  scanf("%d",&a);
  return a;
}

void input_array(int n, int a[n]) 
{
  int i;
  for(i=0; i<n; i++)
    {
      if(scanf("%d",&a[i]));
    }
}

int is_composite(int n) 
{
  int i, count=0;
  for(i=1; i<=n; i++)
    {
      if(n%i == 0)
      {
        count = count+1;
        if(count==3)
        {
          return 1;
        }
    }
}
  return 0;
  }

int sum_composite_numbers(int n, int a[n])
{
  int i, count=0, sum=0;
  for(i=0; i<=n; i++)
    {
      count = is_composite(a[i]);
      if(count==1)
        sum = sum + a[i];
    }
  return sum;
}

void output(int sum) 
{
  printf("The sum of composite numbers present in the array is %d\n",sum);
}