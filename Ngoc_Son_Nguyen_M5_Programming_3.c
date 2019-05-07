/************************************************
 * filename: Ngoc_Son_Nguyen_M5_Programming_3.c
 * Exercise: Module 5, Programming, Exercise 3
 * Name: Ngoc Son Nguyen
 * Date Created: May 06, 2019
 *
 * Description: This program  uses a 10-element integer array and prompts the user for 10 integer values to populate the array. 
				Pass a pointer of this array to a function called largest() that you create as part of your program. 
				The function largest() then returns the largest value stored in the array to the function main(). 
				Have the function main() output the largest value contained in the array the user.
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int largest(int* arr[SIZE]); /*Declare custom function*/

int main(void)
{
	/*Initialize a regular array and a pointer array*/
	int arr_int[SIZE];
	int *arr_ptr[SIZE];
	int i;
	
	/*Prompt user input. Read and immediately assign each regular element to a pointer element*/
	printf("Enter 10 integers below: \n");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &arr_int[i]);
		arr_ptr[i] = &arr_int[i];
	}
	
	/*Print result from the custom function*/
	printf("The largest value of this array is: %d", largest(&arr_ptr));

	return 0;
}

/*Custom function that find the max element of a array of pointer*/
int largest(int *arr[SIZE])
{
	int j = 0;
	int large; 
	large = *arr[j];
	
	for (j = 1; j < SIZE; j++)
	{
		if (large < *arr[j])
			large = *arr[j];
	}
	
	return large;
}