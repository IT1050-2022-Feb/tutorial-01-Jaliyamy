/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
     float M1,M2,average,sum;
  
  printf("Enter Mark :\n");
  scanf("%f",&M1);

  printf("Enter Mark :\n");
  scanf("%f",&M2);

  sum=M1+M2;
  average=sum/2;

  printf("Your Average is %.2f :\n",average);
  return 0;
  
  return 0;
}

