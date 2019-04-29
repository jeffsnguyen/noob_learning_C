/************************************************
 * filename: Ngoc_Son_Nguyen_M4_Programming_3.c
 * Exercise: Module 4, Programming, Exercise 3
 * Name: Ngoc Son Nguyen
 * Date Created: April 29, 2019
 *
 * Description: This program prompts the user to enter in a character and an integer.  
				Implement a function called repeat_character( ) that takes the two arguments (character and an integer) 
					entered by the user and displays the character by duplicating it the integer number of times on the screen 
					with a single space between the characters.   
					For example:

						Enter a character and a number: A 7
						A A A A A A A
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void display(char letter, int repeat);

int main(void)
{
	/*Initialize variables and prompt user input*/
	int count = 0;
	char ch;

	printf("Enter a character: ");
	scanf("%c", &ch);
	printf("Enter a number: ");
	scanf("%d", &count);
	
	/*Display function call*/
	display(ch, count);

	return 0;
}

/*Custom display function*/
void display(char letter, int repeat)
{
	int r; /*Initialize count variable within custom function*/
	for (r = 1; r <= repeat; r++) /*for loop to repeatedly display the character*/
	{
		printf("%c", letter);
	}
	
}