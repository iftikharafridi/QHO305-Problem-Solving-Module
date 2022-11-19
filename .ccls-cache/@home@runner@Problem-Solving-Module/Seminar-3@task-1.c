/*
Task-01: Simple Calculator
Date: 27-10-2022
  */

#include <stdio.h>
int main(void) {
  // Here I am declaring and initialising my variable
  int a = 10;
  int b = 15;
  int sum = a + b;
  int prod = a * b;
  int diff = a - b;
  float div = a / b;
  printf("The sum of %d and %d = %d", a, b, sum);
  return 0;
}