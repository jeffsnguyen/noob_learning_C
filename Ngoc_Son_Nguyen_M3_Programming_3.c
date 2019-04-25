/************************************************
 * filename: Ngoc_Son_Nguyen_M3_Programming_3.c
 * Exercise: Module 3, Programming, Exercise 3
 * Name: Ngoc Son Nguyen
 * Date Created: April 23, 2019
 *
 * Description: This program determines if a user entered integer is a prime number. 
				A prime number is an integer greater than 1 that can be divided evenly only by 1 or itself. 
					Examples of prime numbers are: 3, 5, 7, 11 and 13. 
				(Hint: Use a while loop and an if statement incorporating the modulo operator.) 
					The output should look like the following with an explanation if it not a prime:
						Enter an integer to be tested if a prime number: 9
						The number is not prime because it is divisible by 3

						Enter an integer to be tested if a prime number: 5683
						The number is a prime.
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*Initialize variables*/
	int number, count, flag;
	count = 2;
	flag = 1;
	number = 0;

	/*Prompt user input*/
	printf("Enter an integer to be tested if a prime number: ");
	scanf("%d", &number);

	/*while loop to check if the number is divisible by the count variable whose value range from [2,number)
	Loop terminates and print the correct response when eitherof this happen:
	1) It finds a count value that number can be disivisble by
	2) count = number - 1, which means the loops end without finding a proper coutn that the number can be divisible by/
	*/
	while (count < number)
	{
		if ((number % count) == 0)
		{
			flag = 0;
			printf("The number is not a prime number because it is divisible by %d.", count);
			break;
		}
		else count++;
	}
	if (flag == 1)
		printf("The number is a prime.");

	return 0;
}