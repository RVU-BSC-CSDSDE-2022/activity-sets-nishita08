#include <stdio.h>
#include <math.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;
int input_array_size();
void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main ()
{
 int n;
  float truck_weight,total_weight;
  n = input_array_size();
  Camel c[n];
  input(n,c,&truck_weight);
  find_camel_weight(n,c);
  total_weight = compute_total_weight(n,c,truck_weight);
  output(total_weight);
  return 0;
}
int input_array_size()
{
  int elements;
  printf("Enter the number of camels\n");
  scanf("%d",&elements);
  return elements;
}

void input(int n, Camel c[n], float *truck_weight)
{
  int i,camel_no;
  for(i=0; i<n; i++)
    {
      camel_no = i + 1;
      printf("Enter the height of the camel\n");
      scanf("%f",&c[i].height);
      printf("Enter the length of the camel\n");
      scanf("%f",&c[i].length);
      printf("Enter the radius of the camel\n");
      scanf("%f",c[i].radius);
      }
      printf("Enter the weight of the
truck\n");
scanf("%f",&c[i].weight);
}

void find_camel_weight(int n, Camel c[n])
{
  int i;
  for(i=0; i<n; i++)
    {
      c[i]
.weight = 3.14*(c[i].radius*c[i].radius*c[i].radius)*sqrt(c[i].height*c[i].length);
      }
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
  float total,camel_weight;
  camel_weight = 0.0;
  int i;
  for(i=0; i<n; i++)
    {
      camel_weight = camel_weight + c[i].weight;
    }
  toatl = camel_weight + truck_weight;
  return total;
}

void output(float total_weight)
{
  printf("The total of the truck is %f\n",total_weight);
}