/************************************************
 * filename: Ngoc_Son_Nguyen_M1_Programming_4.c
 * Exercise: Module 1, Programming, Exercise 4
 * Name: Ngoc Son Nguyen
 * Date Created: April 17, 2019
 *
 * Description: This program declares an integer variable named "age_years" and initializes the variable to someone's age.  
				The program convert the age in years to days by multiplying with 365 and assign to a variable called "age_days".  
				The program Use the printf() statement to display the values of both variables, "age_years" and "age_days", using the following message:

       I am ____ years old which is also ____ days old!
 *************************************************/
#include <stdio.h>
int main(void)
{
	/*Initialize the variable. Age is set to 32 as the question did not specify.*/
	int age_years = 32;
	int age_days = age_years * 365;
	
	/* Outout the sentence*/
	printf("I am %d years old which is also %d days old!", age_years, age_days);
	return 0;
}