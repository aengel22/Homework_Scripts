//  Program 5 | Intro to Programming | Anna Engel
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(void)
{
  int oneDim[3], i; //Accepts 3 random integer values in OneDimentional array

  printf("\nPrinting elements of the One Dimmentional array\n");
  srand (time(NULL)); //seeds random number generator
      
      for(i = 0; i < 3; i++)
      {
          printf("%d ", rand() % 100); //Fills array with random values 0-100
      }
   printf("\n Part 1 is complete \n");
// Start part 2

  int multDim[2][3]; //accepts integer values
  int x, y;
  for (x = 0; x < 2; x++) {
      for (y = 0; y < 3; y++) {
          printf("%d ", rand() % 100); //Fills array with random values 0-100
      }
  }
  printf("\n Part 2 is complete \n");
}