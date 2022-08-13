/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2;  //create variables

  printf( "Enter mark 1: ");
  scanf ( "%f", &mark1);  //get user input

  printf( "Enter mark 2: ");
  scanf ( "%f", &mark2);  //get user input

  printf( "\n\nAverage:%.2f", ( mark1 + mark2 ) / 2.0 );
  
  
  return 0;
}

