/************************************************
 * filename: Ngoc_Son_Nguyen_M3_Programming_1.c
 * Exercise: Module 3, Programming, Exercise 1
 * Name: Ngoc Son Nguyen
 * Date Created: April 23, 2019
 *
 * Description: This program uses nested for loops to produce the following output:
 				&
				&&
				&&&
				&&&&
				&&&&&
				&&&&&&
 *************************************************/
#include <stdio.h>
int main(void)
{
	/*Initialize count for the for loop and print_times to determine how many time the loop runs (set to 6 per assignment's requirement).*/
	int count, print_times_vert, print_times_horz;
	print_times_vert = 6;
	
	/*Explains what the program does.*/
	printf("This program displays the following output.\n");

	/*Printing for loop*/
	for (count = 1; count <= print_times_vert; count++)
	{
		for (print_times_horz = 1; print_times_horz <= count; print_times_horz++)
			printf("&");
		printf("\n"); /*go to next line*/
	}
	
	return 0;
}