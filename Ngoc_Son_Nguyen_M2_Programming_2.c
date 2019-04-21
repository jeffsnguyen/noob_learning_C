/************************************************
 * filename: Ngoc_Son_Nguyen_M2_Programming_2.c
 * Exercise: Module 2, Programming, Exercise 2
 * Name: Ngoc Son Nguyen
 * Date Created: April 20, 2019
 *
 * Description: This program prompts the user to enter an integer value. 
				The program then incorporates a while loop to display the user entered value and the next 10 consecutive integers.
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS  /*to disable deprecation in Visual Studio 9*/
#include <stdio.h>
int main(void)
{
	/*
	Initialize count & input variable. 
	Assign count's value to be 0 for the while loop
	input is the integer value that user will enter.
	*/
	int count, user_input;
	count = 0;

	/*Explains what the program does and then, prompt user to input a value.*/
	printf("This program will display your input along with the next 10 consecutive integers following it.\n");
	printf("Please enter an interger value: ");
	scanf("%d", &user_input);
	
	
	/*while loop of count to display 11 values total: the initial value that user entered and then 10 consecutive integers following that value.
	Afterwards, loop terminates.*/
	while (count <=10)
	{
		printf("%d\n", user_input);
		count++;
		user_input++;
	}
	
	return 0;
}