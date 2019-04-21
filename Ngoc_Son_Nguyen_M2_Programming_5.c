/************************************************
 * filename: Ngoc_Son_Nguyen_M2_Programming_4.c
 * Exercise: Module 2, Programming, Exercise 4
 * Name: Ngoc Son Nguyen
 * Date Created: April 20, 2019
 *
 * Description: This program prompts the user to enter a value for the price of an item to be purchased.  
				The program then adds on a sales tax of 5.6%. Value is rounded to the cents.
				Display the results as shown in the following format:
						Example 1: Item price of $0.98 with sales tax is 1 dollars and 3 cents
						Example 2: Item price of $0.99 with sales tax is 1 dollars and 5 cents
 *************************************************/
#define _CRT_SECURE_NO_WARNINGS  /*to disable deprecation in Visual Studio 9*/
#include <stdio.h>

int main(void)
{
	/*Initialize variables*/
	float price, price_input, price_cents;
	float const sales_tax = 5.6;
	int price_dollars;
	price_input = 0;

	/*Explains what the program does and then prompt user for input.*/
	printf("This program will display this sentence similar to this: 'Item price of $0.98 with sales tax is 1 dollars and 3 cents'\n");
	printf("Enter a value for the price of an item to be purchased: ");
	scanf("%f", &price_input);

	/*Add sales tax. Then calculate and display value in dollars and cents*/
	price = price_input * (1 + (sales_tax / 100));
	price_dollars = price;
	price_cents = 100 * (price - price_dollars);
	printf("Item price of $%.2f with sales tax is %d dollars and %.0f cents", price_input, price_dollars, price_cents);
	
	return 0;
}