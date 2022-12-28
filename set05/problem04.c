#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main () {
  
  int radius,height,length,mood;
  input_camel_details(&radius,&height,&length);
  mood=find_weight(radius,height,length);
  output(radius,height,length,mood);
  return 0;
}


void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the stomach radius\n");
  scanf("%f",radius);
  printf("Enter the height radius\n");
  scanf("%f",height);
  printf("Enter the length radius\n");
  scanf("%f",length);
}

int find_mood(float radius, float height, float length) {
  
}



