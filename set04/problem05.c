#include <stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main ()
{
  int n,index;
  n = input_size();
  int a[n];
  input_array(n,a);
  index = find_largest_index(n,a);
  output(index);
  return 0;
}

int input_size()
{
  int n;
  printf("Enter the size\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  int i;
  for(i=0; i<n; i++)
    {
      printf("Enter the values\n");
      scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
  int i;
  int index;
  int largest = a[0];
  for(i=0; i<n; i++)
    {
      if(a[i] > largest)
      {
        largest = a[i];
        index = i;
      }
    }
  return index;
}

void output(int index)
{
  printf("The index of largest number in the array is %d\n",index);
}