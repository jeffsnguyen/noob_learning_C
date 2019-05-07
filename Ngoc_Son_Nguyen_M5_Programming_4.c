/************************************************
 * filename: Ngoc_Son_Nguyen_M5_Programming_4.c
 * Exercise: Module 5, Programming, Exercise 4
 * Name: Ngoc Son Nguyen
 * Date Created: May 06, 2019
 *
 * Description: This program  uses a 10-element integer array and prompts the user for 10 integer values to populate the array.  
				Pass a pointer of this array to a function called sort() that you create as part of your program.  
				The function sort() arranges the numbers in the array from smallest to largest.  
				Have the function main() output the sorted numbers to the user.
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void sort(int* arr[SIZE]); /*Declare custom function*/

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
	
	sort(&arr_ptr); /*Call custom sort function*/

	/*Print sorted array*/
	for (i = 0; i < SIZE; i++)
		printf("%d\n", *arr_ptr[i]);

	return 0;
}

/*Custom sort function*/
void sort(int* arr[SIZE])
{
	int j,k;
	int comp = 0; /*Temp variable to swap when compare*/
	
	for (j = 0 ; j < SIZE ; j++)  /*Start with the first element, compare it with the rest of the array*/
	{
		for (k = j + 1; k < SIZE; k++) 
		{
			if (*arr[j] > *arr[k])
			{
				comp = *arr[j];         
				*arr[j] = *arr[k];
				*arr[k] = comp;  
			}
		}
	}
}

