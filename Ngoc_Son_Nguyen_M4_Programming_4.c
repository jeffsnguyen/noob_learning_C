/************************************************
 * filename: Ngoc_Son_Nguyen_M4_Programming_4.c
 * Exercise: Module 4, Programming, Exercise 4
 * Name: Ngoc Son Nguyen
 * Date Created: April 29, 2019
 *
 * Description: This program prompts the user to enter in two "long" values. 
				Implements a function called negative_count( ) that takes two arguments of data type "long" and returns an integer 
					that is the number of arguments that were negative.
				The function main( ) then displays the result. 
				For example:

					Enter two integers of data type "long": -1264364007 -2012334695
					Number of negative number entered 2
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int negative_count(long int a, long int b);

int main(void)
{
	/*Initialize variables and prompt user input*/
	long int num1 = 0;
	long int num2 = 0;

	printf("Enter an integer: ");
	scanf("%ld", &num1);
	printf("Enter an integer: ");
	scanf("%ld", &num2);
	
	/*Custom negative count function call*/
	printf("Number of negative number entered: %d", negative_count(num1, num2));

	return 0;
}

/*Custom negative count function*/
int negative_count(long int a, long int b)
{
	int neg = 0;
	if (a < 0)
		neg++;
	if (b < 0)
		neg++;
	
	/*Return the negative count value to the function*/
	return neg;
}