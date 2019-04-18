/************************************************
 * filename: Ngoc_Son_Nguyen_M1_Programming_5.c
 * Exercise: Module 1, Programming, Exercise 5
 * Name: Ngoc Son Nguyen
 * Date Created: April 17, 2019
 *
 * Description: This program declares an integer variable named "number" and initializes the variable to the value 11. 
				The program then calculates and displays the results of the following using the +, -, *, and / operators:

		number times 2
		number divided by 2
		number plus 2
		number minus 2
		number squared (num times num)
 *************************************************/
#include <stdio.h>
int main(void)
{
	/*Initialize variables and set values*/
	int number = 11;
	float number_times2,
		  number_div2,
		  number_plus2,
		  number_minus2,
		  number_squared;
	
	/*Calculate variables*/
	number_times2 = number*2;
	number_div2 = number/2;
	number_plus2 = number+2;
	number_minus2 = number-2;
	number_squared = number*number;

	/*Output the sentence*/
	printf("number times 2 = %.1f\nnumber divided 2 = %.1f\nnumer plus 2 = %.1f\nnumber minus 2 = %.1f\nnumber squared (num times num) = %.1f"
			,number_times2, number_div2, number_plus2, number_minus2, number_squared);
	return 0;
}