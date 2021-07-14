/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float m1 , m2 ;

  printf ( "Enter Marks of Subject 1 : " ) ;
  scanf ( "%f" , &m1 ) ;

  printf ( "Enter Marks of Subject 2 : " ) ;
  scanf ( "%f" , &m2 ) ;

  printf ( "\nAverage is %.2f ." , (m1 + m2) / 2.0 ) ;



  return 0;
}

