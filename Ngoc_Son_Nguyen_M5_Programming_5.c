/************************************************
 * filename: Ngoc_Son_Nguyen_M5_Programming_5.c
 * Exercise: Module 5, Programming, Exercise 5
 * Name: Ngoc Son Nguyen
 * Date Created: May 06, 2019
 *
 * Description: This program prompts the user for a character string. 
				Pass this string to a function called reverse() that you create as part of your program.   
				The function reverse() then reverses the order of all of the characters in the string.   
				Have the function main() output the reversed string array to the user.
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void reverse(char *ch); /*Declare custom function*/

int main(void)
{
	/*Initialize a regular array and a pointer array*/
	char str[SIZE];
			
	/*Prompt user input. Read and immediately assign each regular element to a pointer element*/
	printf("Enter a strimg of less than %d characters: ", SIZE);
	gets(str);

	reverse(str);
	/*Print sorted string*/
	printf("This is the reversed string: %s", str);
	
	return 0;
}

/*Custom sort function*/
void reverse(char *ch)
{
	int i, j;
	char temp;
	j = strlen(ch) - 1;

	for (i = 0; i < j; i++)
	{
		temp = ch[i];
		ch[i] = ch[j];
		ch[j] = temp;
		j--;
		
	}

}

