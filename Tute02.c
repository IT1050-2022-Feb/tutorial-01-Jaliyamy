/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
    float D,amount;
  
  printf("Enter Distance :\n");
  scanf("%f",&D);
  
  if(D<=30)
  {
      amount=D*50;
      printf("Total amount payble : %.2f",amount);
      
  }
  else if(D>30)
  {
      amount = 30 * 50 + (D-30) * 40;
      printf("Total amount payble : %.2f",amount);
  }

  return 0;
  
  return 0;
}
