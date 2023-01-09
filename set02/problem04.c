#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int input_array_size() 
{
  int a;
  printf("Enter the size of Array\n");
  scanf("%d",&a);
  return (a);
}

void input_array(int n, int a[n]) 
{
  int i;
  printf("Enter the number\n");
  for(i=0; i<n; i++) 
  {
    scanf("%d",&a[i]);
  }
}

