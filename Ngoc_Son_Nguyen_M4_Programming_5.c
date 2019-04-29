/************************************************
 * filename: Ngoc_Son_Nguyen_M4_Programming_5.c
 * Exercise: Module 4, Programming, Exercise 5
 * Name: Ngoc Son Nguyen
 * Date Created: April 29, 2019
 *
 * Description: This program prompts the user to enter in two integers.  
				Implement a function called max_value( ) that takes two arguments that are pointers to two integers entered by the user.  
				The function max_value( ) determines which of the two values is the largest and assigns the max value to both variables.  
				The function main( ) then displays the values of both variables to demonstrate that they both contain the max value.  
				For example:

					Enter two integers:  23  57 
					Both values are now: 57  57
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void max_value(int *ptr1, int *ptr2);

int main(void)
{
	/*Initialize variables and prompt user input*/
	int num1 = 0;
	int num2 = 0;
	int *ptr1, *ptr2;

	printf("Enter an integer: ");
	scanf("%d", &num1);
	printf("Enter an integer: ");
	scanf("%d", &num2);
	
	/*Custom max value function call*/
	max_value(&num1, &num2);

	/*Display output after pointers have been assigned values*/
	printf("Both values are now: %d %d", num1, num2);

	return 0;
}

/*Custom negative count function*/
void max_value(int *ptr1, int *ptr2)
{
	if (*ptr1 > *ptr2)     /*if statement to find the larger pointer value and assign that to the other pointer*/
		*ptr2 = *ptr1;
	else *ptr1 = *ptr2;
}