//  Program 5 | Intro to Programming | Anna Engel

/*
Create a basic program that accomplishes the following requirements:
1. Use a loop to load random integer values into a 1-dimensional array.
2. Use a loop to load random integer values into a multidimensional array.
** Use FUNCTIONS for 3-5 - and pass the array(s) to the functions 
3. Create a function to search (Linear) for numbers in both.
    a. The search should find all numbers divisible by 3 and return the number to the user, 
    as well as print the number to the screen.
4. Write functions to print the contents of each array.
    a. Your function should accept an array as the parameter.
5. Write a function that increments all the values by an integer that is passed as a parameter. 
    This parameter should be passed by reference.
6. Print the byte sizes of each array to the screen.
*/

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

/* Ok, I see a couple issues to start
1. You don't use printf to assign values to a variable, right? 
    This goes for both 1D and 2D arrays (other than looping through both rows
    and columns for 2D arrays)
Example: 
for (i=0;i<3;++i)
{
    oneDim[i] = rand()%100;
}

2. Why are you now using a const for the size of the arrays? 
Example:
#define SIZE1D 3
#define SIZEROW 2
#define SIZECOL 3

int main(void)
{
    int oneDim[SIZE1D];
    int multDim[SIZEROW][SIZECOL];
    int i, x, y;
}

3. I added the assignment criteria to the top of the program in the comments
    This will help you keep track of what you are doing. 
    I go to the end of each line and type - DONE {date} so I know when I completed it

4. I would start with the print the array function. You can use it multiple times.
    Print each array once. Then, after you increase the values in the array by xx, 
    print each array again. 

This should be enough for you to work with. Let me know if you need a sample to work 
from.
*/