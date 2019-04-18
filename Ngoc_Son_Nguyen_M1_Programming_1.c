/************************************************
 * filename: Ngoc_Son_Nguyen_M1_Programming_1.c
 * Exercise: Module 1, Programming, Exercise 1
 * Name: Ngoc Son Nguyen
 * Date Created: April 17, 2019
 *
 * Description: This program declares and initializes the following variable names with the information provided using correct data types and outputs the information
				using printf() with the correct format specifiers.

	First_name = George
	Middle_Initial = T
	Last_name = Clooney
	Year_born = 1961
	Height_in_meters = 1.8
	Net_worth_USD = 512,345,678
	Output should look exactly as shown below using printf() with the above initialized variables:

	   George T Clooney, born 1961, is 1.8 meters tall and is worth $512345678
 *************************************************/
#include <stdio.h>
int main(void)
{
	/*Declaring and initializing variables*/
	char First_name[] = "George";
	char Middle_Initial[] = "T";
	char Last_name[] = "Clooney";
	int Year_born = 1961;
	float Height_in_meteres = 1.8;
	float Net_worth_USD = 512345678;

	/*Output the information*/
	printf("%s %s %s, born %d, is %.1f meters tall and is worth $%.0f", First_name, Middle_Initial, Last_name, Year_born, Height_in_meteres, Net_worth_USD);
	return 0;
}