#include <stdio.h>

int main()
{
  
  int x; // Declaration
  x = 123; // Initialization
  int y = 123; // Declaration and Initialization
  
  int age = 21; // Integer
  float gpa = 2.1; // Single precision floating point
  char grade = 'A'; // Single quotes for single characters
  char name[] = "John"; // Array of characters cuz C doesn't have a string type
  
  printf("\nHello %s\n", name);
  printf("You are %d years old", age);
  printf("\nYour average grade is %c", grade);
  printf("\nYour GPA is %f", gpa);
  
  return 0;
}
