/************************************************
 * filename: Ngoc_Son_Nguyen_M1_Programming_3.c
 * Exercise: Module 1, Programming, Exercise 3
 * Name: Ngoc Son Nguyen
 * Date Created: April 17, 2019
 *
 * Description: This program declares and initializes two variables then calculates and outputs the average of the values:    temperature1 = 70    temperature2 = 85

	   Output should look exactly as shown below using above initialized variables:

       The average of 70 and 85 degrees is 77.5 degrees
 *************************************************/
#include <stdio.h>
int main(void)
{
	/*Initialize variables and set values*/
	float temperature1, temperature2, temperature_avg;
	temperature1 = 70;
	temperature2 = 85;

	/*Calculate average temperature*/
	temperature_avg = (temperature1 + temperature2) / 2;
	
	/*Output the sentence*/
	printf("The average of %.0f and %.0f degrees is %.1f degrees", temperature1, temperature2, temperature_avg);
	return 0;
}