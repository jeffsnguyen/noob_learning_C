/************************************************
 * filename: Ngoc_Son_Nguyen_M3_Programming_5.c
 * Exercise: Module 3, Programming, Exercise 5
 * Name: Ngoc Son Nguyen
 * Date Created: April 24, 2019
 *
 * Description: This program  reads in a single sentence up to the period. 
				The program outputs the modified sentence with all of the spaces removed and replaces each of the vowels with the letter 'Z'.
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*Initialize variable*/
	char ch;
		
	/*Explain to use what the program does.*/
	printf("This program reads in a single sentence up to the period.\n");
	printf("The program outputs the modified sentence with all of the spaces removed and replaces each of the vowels with the letter 'Z'.\n");
	printf("Please input a single sentence:\n");
	
	while ((ch = getchar()) != '.')
	{
		switch (ch) /*check for vowels, spaces and regular characters*/
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			case 'y':
			case 'Y':
				putchar('Z');
				break;
			case ' ':
				break;
			default:
				putchar(ch);
				break; 
		}
	}
	putchar('.'); /*Print the period as it is indeed part of the sentence but the loop is terminated before it's printed.*/

	return 0;
}