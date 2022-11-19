/*
Exercise-02: Getting input from user
Date: 20-10-2022
  */

#include <stdio.h>
int main(void) {
  int age;
  printf("Please enter an age ");
  scanf("%d", &age);
  printf("The user enter an age %d", age);
  return 0;
}