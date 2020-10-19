#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//define function prototypes

int subFunc (int x, int y); // accepts and returns two intgers - subtraction function
int addFunc (int x, int y); // accepts and returns two intgers - addition function
int multFunc (int x, int y); // accepts and returns two intgers - Multiply function
void printFunc(int x); // accepts and returns an integer - print function
float roundFunc (float z); // accepts and rounds an integer - round sunction
int getValueOne (void); 
int getValueTwo (void);
float getValueThree (void);

int main() // Boss Function
{
    int valueOne, valueTwo; //integer values are called
    float valueThree; // decimal "float" value is called
    printf("\n Part 1: Integer Functions \n");

    //passes values 1 and 2 to sub function
    printf("\n Starting the Subtraction Function \n");
    valueOne = getValueOne();
    valueTwo = getValueTwo();

    int subFuncResult = subFunc (valueOne, valueTwo);

    printf("\n\n %d - %d = %d \n", valueOne, valueTwo, subFuncResult);

    //passes values 1 and 2 to add function
    printf("\n Starting the Addition Function \n");
    valueOne = getValueOne();
    valueTwo = getValueTwo();

    int addFuncResult = addFunc(valueOne, valueTwo); 

    printf("\n\n %d + %d = %d \n", valueOne, valueTwo, addFuncResult);

    //passes values 1 and 2 to Multiplication Function
    printf("\n Starting the Multiplication Function \n");
    valueOne = getValueOne();
    valueTwo = getValueTwo();

    int multFuncResult = multFunc(valueOne, valueTwo); 

    printf("\n\n %d * %d = %d \n", valueOne, valueTwo, multFuncResult);

    //passes value one to print function
    printf("\n Starting the Print Function \n");
    valueOne = getValueOne();
    printFunc (valueOne);


    //passes value three to the float function
    printf("\n Starting the Rounding Function \n");
    valueThree = getValueThree();
    float roundFuncResult = roundFunc (valueThree);
    printf("\n The Rounded Value of %.2f is %.2f \n", valueThree, roundFuncResult);

    //end

    printf("\n Complete! \n");

}

//Get Values from user
int getValueOne(void)
{
    int x;
    printf("\n Enter the first integer value \n");
    scanf("%d", &x);
    return x;
}

int getValueTwo(void)
{
    int y;
    printf("\n Enter the second integer value \n");
    scanf("%d", &y);
    return y;
}

float getValueThree(void)
{
    float z;
    printf("\n Enter a floating point value \n");
    scanf("%f", &z);
    return z;
}

int subFunc (int x, int y) //subtraction function
{
    int returnResult = x - y;
    return returnResult;
}

int addFunc (int x, int y) //addition function
{
    int returnResult = x + y;
    return returnResult;
}

int multFunc (int x, int y) //multiply function
{
    int returnResult = x * y;
    return returnResult;
}

void printFunc (int x) //print function
{
    printf("\n The value you entered is %d \n", x);
}

float roundFunc (float z) //round function
{
    float returnResult = round(z);
    return returnResult;
}