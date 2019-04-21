/************************************************
 * filename: Ngoc_Son_Nguyen_M2_Programming_1.c
 * Exercise: Module 2, Programming, Exercise 1
 * Name: Ngoc Son Nguyen
 * Date Created: April 20, 2019
 *
 * Description: This program displays all of the odd numbers from 1 to 100 by incrementing a variable within a while loop.
 *************************************************/
#include <stdio.h>
int main(void)
{
	/*Initialize count variable. Assign count's value to be 1 as the first odd number.*/
	int count = 1;

	/*Explains what the program does.*/
	printf("This program displays all of the odd numbers from 1 to 100.\n");

	/*while loop of count, since count's value starts at 1, simply add 2 after displaying to get the next odd number. Loop terminates when count gets to 100.*/
	while (count <= 100)
	{
		printf("%d\n", count);
		count = count + 2;
	}
	
	return 0;
}