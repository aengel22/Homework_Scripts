
// Module 1 - Program 1
// Anna Engel 8/27/2020
// My first program in C

#include<stdio.h>

int main()
{
	
	printf("\n My name is Anna \n I'm a Sophomore \n Linux is the best \n C is weird \n ");
// First Function 

	int ex1, ex2, ex3, ex4;
	ex1 = 10;
	ex2 = 20;
	ex3 = 50;
	ex4 = 100;
	
	printf("\nExamples of integers include:\n %d",ex1);
	printf("\n %d",ex2);
	printf("\n %d",ex3);
	printf("\n %d\n",ex4);

	int integer1; //first number entered by user
	int integer2; //second number entered by user

	printf( "\n Enter first integer\n" ); //prompt
	scanf( "%d", &integer1 );  // reads the first integer

	printf( " Enter second integer\n" ); //prompt
	scanf( "%d", &integer2 ); // reads the second integer

	int sum; // variable which will store sum
	sum = integer1 + integer2; // assign total to sum

	printf( "\n Sum is %d\n", sum); // prints sum

// Include an if statement

	if ( sum < 100 ) {
		printf ( " The sum is less than 100!\n" );
	}
	else if ( sum == 100 ) {
		printf ( " Holy cow, it equals 100! You win nothing!\n");
	}
	else {
		printf ( " The sum is greater than 100!\n" );
	}
return 0;
}
