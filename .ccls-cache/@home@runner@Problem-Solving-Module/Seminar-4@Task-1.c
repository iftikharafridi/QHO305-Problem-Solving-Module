#include <stdio.h>

int main(void) {

  char opt;
  float radius;
  float pi = 3.14;
  float length; // length of a rectangle
  float width;  // width of a rectangle
  printf("Menu\n");
  printf("A - Area and Circumference of a Circle\n");
  printf("B - Area of rectange\n");
  printf("C - Volume of a Sphere\n");
  printf("D -  Volume of a cuboid\n");

  printf("\n Please select the option [A/B/C/D]:");
  opt = getchar();
  // scanf("%c", &opt);

  if (opt == 'A' || opt == 'a') {
    printf("Please enter the Radius of a Circle: ");
    scanf("%f", &radius);
    printf("Circumference = %f", 2 * pi * radius);
    printf("\n Radius = %f", pi * radius * radius);
  } else if (opt == 'B' || opt == 'b') {
    printf("please enter the length: ");
    scanf("%f", &length);
    printf("please enter the width: ");
    scanf("%f", &width);
    printf("The Area = %f", length * width);
  }
  return 0;
}