#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main ()
{
  float radius,height,length;
  int mood;
  input_camel_details(&radius,&height,&length);
  mood = find_mood(radius,height,length,mood);
  output(radius,height,length,mood);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the stomach radius of the camel\n");
  scanf("%f",&*radius);
  printf("Enter the height of the camel");
  scanf("%f",&*height);
  printf("Enter the length of the camel\n");
  scanf("%f",&*length);
}

int find_mood(float radius, float height, float length)
{
  int result;
  if(radius<height && radius<length)
  {
    result = 0;
  }
  else
  {
    result = -1;
  }
  return result;
}

void output(float radius, float height, float length, int mood)
{
  if(mood==0)
  {
    printf("The Camel is Happy\n");
  }
  else
  {
    printf("The Camel is Tense\n");
  }
}