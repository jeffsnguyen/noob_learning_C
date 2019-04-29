/************************************************
 * filename: Ngoc_Son_Nguyen_M4_Programming_2.c
 * Exercise: Module 4, Programming, Exercise 2
 * Name: Ngoc Son Nguyen
 * Date Created: April 29, 2019
 *
 * Description: This program  prompts the user to enter two values of data type "double".  
				Implement a function called print_doubles( ) that takes the two arguments of data type "double" and uses printf( ) to display both.
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void display(double a, double b);

int main(void)
{
	/*Initialize variables and prompt user input*/
	double num1 = 0;
	double num2 = 0;

	printf("Enter a number:\n");
	scanf("%lf", &num1);
	printf("Enter a number:\n");
	scanf("%lf", &num2);

	/*Display function call*/
	display(num1, num2);

	return 0;
}

/*Custom display function*/
void display(double a, double b)
{
	printf("%lf\n", a);
	printf("%lf\n", b);
}