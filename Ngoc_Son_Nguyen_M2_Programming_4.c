/************************************************
 * filename: Ngoc_Son_Nguyen_M2_Programming_4.c
 * Exercise: Module 2, Programming, Exercise 4
 * Name: Ngoc Son Nguyen
 * Date Created: April 20, 2019
 *
 * Description: This program prompts the user to enter the number of seconds and then converts that value to hours and minutes. 
				Use a while loop to allow the user to repeatedly enter second values and terminate the program when the user enters a value of zero or less. 
				Display the results in the following format:
					10000 seconds is 2 hours and 46.67 minutes
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS  /*to disable deprecation in Visual Studio 9*/
#include <stdio.h>

int main(void)
{
	/*Initialize variables*/
	float time_seconds, time_minutes;
	int time_hours;
	
	/*Explains what the program does.*/
	printf("This program will display this sentence similar to this: '10000 seconds is 2 hours and 46.67 minutes'\n");
	printf("IMPORTANT: Enter 0 or a negative value to stop.\n");

	/*Repeatedly prompt user to input value and display the information in a pre-formatted sentence. 
	Program stops whem user enter a value <= 0.*/
	do
	{
		printf("Please enter the number of seconds (Enter 0 or a negative number to stop): ");
		scanf("%f", &time_seconds);
		time_hours = time_seconds / 3600;
		time_minutes = (time_seconds - ((time_hours) * 3600)) / 60;
		printf("%.2f seconds is %d hours and %.2f minutes\n", time_seconds, time_hours, time_minutes);
	}	while (time_seconds > 0);
	
	/*Explains why the program terminates.*/
	printf("Input is 0 or negative. Program terminates.");
	
	return 0;
}