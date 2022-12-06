#include <stdio.h>

 int input_arry_size();
void input_arry(int n, int a[n]);
int sum_n_arry(int n, int a[n]);
void output(int n, int a[n],int sum);

int main() 
{
  int n, sum;
  n=input_arry_size();
  int a[n];
  input_arry(n,a);
  sum=sum_n_arry(n,a);
  output(n,a,sum);
  
}

int input_arry_size() 
{
  int a;
  printf("Enter the size of the Array\n");
    scanf("%d", &a);
  return(a);
}

void input_arry(int n, int a[n])
{
  int i;
  printf("Enter the number\n");
  for(i = 0;i<n;i++)
    {
    scanf("%d", &a[i]);
    }
}


int sum_n_arry(int n, int a[n]) 
{
  int sum = 0,i;
  for(i = 0;i<n;i++)
  {
    sum = sum+a[i];
  }
  return(sum);
}
void output(int n, int a[n],int sum)
{
  int i;
  for(i = 0;i<n-1;i++)
  {
    printf("%d + " , a[i]);
  }
  printf("%d = %d",a[n-1],sum);
}