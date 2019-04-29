/************************************************
 * filename: Ngoc_Son_Nguyen_M4_Programming_1.c
 * Exercise: Module 4, Programming, Exercise 1
 * Name: Ngoc Son Nguyen
 * Date Created: April 28, 2019
 *
 * Description: This program  prompts the user to enter in characters, an equal sign, and an integer.  
				The program then reads and discards all characters from standard input using getchar( ) until it encounters the "=".  
				The program then reads the integer value that follows the "=" using scanf( ) and outputs the value back to the user.  
				For example:
					Enter some text, equal sign and an integer: The number = 16439 
					The integer you entered is:   16439
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*Initialize variables and prompt user input*/
	int num = 0;
	char ch;
	printf("Enter some text, equal sign and an integer: ");

	/*Receive keyboard input until special character is entered*/
	while ((ch = getche()) != '=')
		continue;

	/*Read the integer after the special character*/
	scanf("%d", &num);

	/*Output result*/
	printf("The integer you entered is: %d", num);

	return 0;
}