/************************************************
 * filename: Ngoc_Son_Nguyen_M5_Programming_1.c
 * Exercise: Module 5, Programming, Exercise 1
 * Name: Ngoc Son Nguyen
 * Date Created: May 03, 2019
 *
 * Description: This program creates an array containing all prime numbers between 1 and 10,000 in ascending order.  
				Display the 5 largest prime numbers from the array using the following format:
					Largest 5 prime numbers between 1 and 10,000 are:  .....,  .....,  ......,  ......,  ......
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MINRANGE 1
#define MAXRANGE 10000
#define PRINTSIZE 5
int prime_check(int x); /*This function check if a number is a prime*/

int main(void)
{
	int arr[MAXRANGE];
	int num = 1; /*This is the count variable for the loop*/
	int count_size = 0;  /*This indicates the position in the array to write to in the loop. Also returns the size of the array at the end of the loop*/
	int count_print = 0; /*This helps count backward to print the largest numbers from the array*/

	/*This loop check the prime number condition and write to the array as necessary*/
	for (num = 1; num <= MAXRANGE; num++)
	{
		if (prime_check(num) == 1)
		{
			arr[count_size] = num;
			count_size++;
		}
	}
	count_print = count_size - 1; /*Because array position started at 0 instead of 1, this is necessary to avoid printing garbage value*/

	printf("Largest %d prime numbers between %d and %d are: ", PRINTSIZE, MINRANGE, MAXRANGE);
	/*This loop print the largest number backwards. Could have hardcoded the 5 value but this is more dynamic.*/
	for (num = 1; num <= PRINTSIZE; num++)
	{
		printf("%d ", arr[count_print]);
		count_print--;
	}

	return 0;
}

/*This function check if a number is a prime*/
int prime_check(int x)
{
	int flag = 1;
	int count = 2;
	while (count < x)
	{
		if ((x % count) == 0)
		{
			flag = 0;
			break;
		}
		else count++;
	}
	return flag;
}