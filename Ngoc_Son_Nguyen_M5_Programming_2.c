/************************************************
 * filename: Ngoc_Son_Nguyen_M5_Programming_2.c
 * Exercise: Module 5, Programming, Exercise 2
 * Name: Ngoc Son Nguyen
 * Date Created: May 03, 2019
 *
 * Description: This program implements a two dimensional array with 5 rows and 2 columns. 
				Prompt the user to input 5 integer values to be stored in the first column and 
					then calculate and store the squared values for each user input in the second column. 
				Output the results from the two dimensional array to the user in the following format: 

					Value	  Squared
					5			25
					-20			400
					1			1
					1000		1000000
					-50			2500
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5][2];
	int i, j;

	printf("Enter 5 integer values: \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i][0]);
		arr[i][1] = arr[i][0] * arr[i][0];
	}

	
	printf("Value\t Squared\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf(" %d\t", arr[i][j]);
			if (j == 1) printf("\n");
		}
	}

	return 0;
}