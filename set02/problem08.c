#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main () {
  int n = input_n();
  Triangle t[n];
  input_n_triangles(n,t);
  find_area(&t[n]);
  find_n_areas(n,t);
  Triangle smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
}

int input_n() {
  int n;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  return n;
}

Triangle input_triangle() {
  Triangle a;
  printf("Enter the base and altitude of the triangle\n");
  scanf("%f %f",&a.base,&a.altitude);
  return a;
}

void input_n_triangles(int n, Triangle t[n]) {
  int i;
  for(i=0; i<n; i++) {
    t[i] = input_triangle();
  }
}

void find_area(Triangle *t) {
  t->area = 0.5 * (t->base) * (t->altitude);
 
}

void find_n_areas(int n, Triangle t[n]) {
  int i;
  for(i=0; i<n; i++) {
    find_area(&t[i]);
  }
}

Triangle find_smallest_triangle(int n, Triangle t[n]) {
  int i;
  Triangle smallest = t[0];
  for(i=1; i<n; i++) {
    if (t[i].area < smallest.area) {
      smallest = t[i];
    }
  }
  return smallest;
}

void output(int n, Triangle t[n], Triangle smallest) {
  printf("The smallest triangle of triangles base and height");
  for(int i =0; i<n; i++) {
    printf("%1.2f,%1.2f) ",t[i].base,t[i].altitude);
  }
  printf("is the triangle having base, altitude and area is %1.2f, %1.2f and %1.2f",smallest.base,smallest.altitude,smallest.area);
}