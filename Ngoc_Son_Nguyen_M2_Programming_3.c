/************************************************
 * filename: Ngoc_Son_Nguyen_M2_Programming_3.c
 * Exercise: Module 2, Programming, Exercise 3
 * Name: Ngoc Son Nguyen
 * Date Created: April 20, 2019
 *
 * Description: This program prompts the user to enter a trip distance in miles, a speed in miles/hour, and a name. 
				Calculate how long the trip will take and then displays the information in the following form:
						Sam, your trip of 100 miles at 40 mph will take 2.5 hours
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS  /*to disable deprecation in Visual Studio 9*/
#include <stdio.h>

int main(void)
{
	/*Initialize variables*/
	float trip_distance, travel_speed, travel_time;
	char user_name[30];
	
	/*Explains what the program does and then, prompt user to input multiple values.*/
	printf("This program will display this sentence similar to this: 'Sam, your trip of 100 miles at 40 mph will take 2.5 hours.'\n");
	
	printf("Please enter the distance of your trip in miles: ");
	scanf("%f", &trip_distance);
	
	printf("Please enter your traveling speed in miles/hour: ");
	scanf("%f", &travel_speed);
	
	printf("Please enter your name (without space and max 30 characters): ");
	scanf("%s", &user_name);

	/*Calculate traveling time.*/
	travel_time = trip_distance / travel_speed;

	/*Display information in this format: 'Sam, your trip of 100 miles at 40 mph will take 2.5 hours'*/
	printf("%s, your trip of %.2f miles at %.2f mph will take %.2f hours",user_name,trip_distance,travel_speed,travel_time);
	
	return 0;
}