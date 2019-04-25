/************************************************
 * filename: Ngoc_Son_Nguyen_M3_Programming_4.c
 * Exercise: Module 3, Programming, Exercise 4
 * Name: Ngoc Son Nguyen
 * Date Created: April 23, 2019
 *
 * Description: This program reads input until encountering the # character and then reports:
				1) the number of spaces read, 
				2) the number of new line characters read, 
				3) the number of all other characters read.
				Example:
				This is
				a
				test#

				Characters: 11
				Spaces: 1
				Lines:3
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*Initialize variables*/
	char ch = "";
	int white_spaces = 0;
	int new_lines = 0;
	int characters = 0;

	/*Explain to use what the program does.*/
	printf("This program reads input until encountering the # character and then reports:\n");
	printf("1) the number of spaces read,\n");
	printf("2) the number of new line characters read,\n");
	printf("3) the number of all other characters read.\n");
	printf("Please enter characters:\n");
	
	while ((ch = getchar()) != '#')
	{
		
		if (ch == '\n') /*count new lines*/
			new_lines++; 
		else if (ch == ' ' || ch == '\t' || ch == '\v') /*count white spaces including tabs*/
			white_spaces++; 
		else
			characters++; /*count other characters*/
	}

	/*Print count results*/
	printf("Spaces: %d\n", white_spaces);
	printf("New lines: %d\n", new_lines);
	printf("Characters: %d\n", characters);

	return 0;
}