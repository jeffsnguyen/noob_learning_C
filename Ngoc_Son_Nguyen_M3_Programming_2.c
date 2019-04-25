/************************************************
 * filename: Ngoc_Son_Nguyen_M3_Programming_2.c
 * Exercise: Module 3, Programming, Exercise 2
 * Name: Ngoc Son Nguyen
 * Date Created: April 23, 2019
 *
 * Description: This program prompts the user for the length, width, and height of a rectangular box. 
				The program calculate and display the surface area and volume of the box. 
				The program continue to prompt the user for a set of new box dimensions and output the calculated surface area and volume 
					until a zero or negative dimension is entered.
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*Initialize length, width, height variables.*/
	float length, width, height, area, volume;
	int negative_check = 0;
	length = 1;
	width = 1;
	height = 1;

	/*Explains what the program does.*/
	printf("This program calculates and displays the surface area and volume of a box based on input dimension.\n");
	printf("The program terminates when a 0 or negative dimension is entered.\n");

	/*while loop to receive user input and perform calculation. 
	Perform a negative check at the end to either
	1) continue the loop if check is false (=0)
	or
	2) terminate the loop if check is true (=1)
		*/
	while (negative_check == 0)
	{
		printf("length = ");
		scanf("%f", &length);
		printf("width = ");
		scanf("%f", &width);
		printf("height = ");
		scanf("%f", &height);
		area = length * width;
		volume = area * height;
		printf("area = %.2f\n", area);
		printf("volume = %.2f\n", volume);
		printf("------------------------\n");
		negative_check = (length <= 0) || (width <= 0) || (height <= 0);
	}
	
	printf("One or more dimension is <= 0. Program terminated.");
	return 0;
}