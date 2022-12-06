#include<stdio.h>
#include <stdlib.h>
int input_array_size()
{
  int a; 
  printf("enter the total number of values entered");
  if(scanf("%d", &a)!=1)
  {
    printf("error");
    exit(0);
  }
  return a;
}
void input(int n, int arr[n])
{
  printf("enter the values");
  for(int i=0;i<n;i++)
    {
    scanf("%d", &arr[i]);
    }
  
}
int sum(int n,int arr[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
      sum=sum+(int)arr[i];
    }
  return sum;
}
void output( int n, int arr[n],int sum)
{
  printf("%d",sum);
}
int main()
{
  int p=input_array_size();
  int b[p];
  input(p,b);
  int r=sum(p,b);
  output(p,b,r);
  return 0;
}