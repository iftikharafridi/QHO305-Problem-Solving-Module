
#include <stdio.h>
int main(void) {
  // Your code will go here
  char firstLetter;
char secondLetter;
// Read in values from user:
printf("Please enter the first letter:");
scanf("%c", &firstLetter);
int ch;
while ((ch = getchar()) != '\n' && ch != EOF);
printf("Please enter the second letter:");
scanf("%c", &secondLetter);
  return 0;
}