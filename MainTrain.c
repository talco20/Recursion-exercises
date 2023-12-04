#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Recursion.h"


int main()
{
	//Task 1// Factorial
	if (factorial(3) != 6)
		printf("Failed task 1 test 1.\n");
	else
		printf("Succeed task 1 test 1.\n");
	if (factorial(5) != 120)
		printf("Failed task 1 test 2.\n");
	else
		printf("Succeed task 1 test 2.\n");

	//Task 2// Biggest in array
	int arr[5] = { 3,8,9,6,5 };
	int arrr[5] = { 8, 9, 22, 3, 1 };
	if (biggestInArray(arr, 5) != 9)
		printf("Failed task 2 test 1.\n");
	else
		printf("Succeed task 2 test 1.\n");
	if (biggestInArray(arrr, 5) != 22)
		printf("Failed task 2 test 2.\n");
	else
		printf("Succeed task 2 test 2.\n");

	//Task 3// Fibonachi
	if (fibonacci(8) != 21)
		printf("Failed task 3 test 1.\n");
	else
		printf("Succeed task 3 test 1.\n");
	if (fibonacci(12) != 144)
		printf("Failed task 3 test 2.\n");
	else
		printf("Succeed task 3 test 2.\n");

	//Task 4// Is array has postive values
	int arr1[5] = { 3,8,9,6,5 };
	int arr2[5] = { 2,6,-1,6,9 };
	if (isArrayPositive(arr1, 5) != 1)
		printf("Failed task 4 test 1.\n");
	else
		printf("Succeed task 4 test 1.\n");
	if (isArrayPositive(arr2, 5) != 0)
		printf("Failed task 4 test 2.\n");
	else
		printf("Succeed task 4 test 2.\n");
	
	//Task 5// Is char exist
	char* str = "Good morning Israel.";
	char* str1 = "Good jooooob man!";
	if (isCharExist(str, 'i') != 1)
		printf("Failed task 5 test 1.\n");
	else
		printf("Succeed task 5 test 1.\n");
	if (isCharExist(str1, 'i') != 0)
		printf("Failed task 5 test 2.\n");
	else
		printf("Succeed task 5 test 2.\n");

	//Task 6// How many times char exist
	if (countSameChars(str, 'i') != 1)
		printf("Failed task 6 test 1.\n");
	else
		printf("Succeed task 6 test 1.\n");
	if (countSameChars(str1, 'o') != 7)
		printf("Failed task 6 test 2.\n");
	else
		printf("Succeed task 6 test 2.\n");

	//Task 7// Power of a number
	int pow1 = 3;
	int pow2 = 4;
	if (powerOfANumber(pow1, pow2) != 81)
		printf("Failed task 7 test 1.\n");
	else
		printf("Succeed task 7 test 1.\n");
	if (powerOfANumber(pow2, pow1) != 64)
		printf("Failed task 7 test 2.\n");
	else
		printf("Succeed task 7 test 2.\n");

	//Task 8// Is divider
	if (divider(45, 5) != 1)
		printf("Failed task 8 test 1.\n");
	else
		printf("Succeed task 8 test 1.\n");
	if (divider(69, 12) != 0)
		printf("Failed task 8 test 2.\n");
	else
		printf("Succeed task 8 test 2.\n");

	//Task 9// Deximal to binary
	int num1 = 5555;
	int num2 = 8877;
	if (decToBinary(5555) != 1010110110011)
		printf("Failed task 9 test 1.\n");
	else
		printf("Succeed task 9 test 1.\n");
	if (decToBinary(8877) != 10001010101101)
		printf("Failed task 9 test 2.\n");
	else
		printf("Succeed task 9 test 2.\n");

	//Task 10// Count blanks
	char* str3 = "Hallo World!, How Are You Today?";//5
	char* str4 = "Hallo World!, How Are  You  Today?";//7
	if (countBlanks(str3) != 5)
		printf("Failed task 10 test 1.\n");
	else
		printf("Succeed task 10 test 1.\n");
	if (countBlanks(str4) != 7)
		printf("Failed task 10 test 2.\n");
	else
		printf("Succeed task 10 test 2.\n");

	//Task 11// Count digits
	if (countDigits(45678903) != 8)
		printf("Failed task 11 test 1.\n");
	else
		printf("Succeed task 11 test 1.\n");
	if (countDigits(12345) != 5)
		printf("Failed task 11 test 2.\n");
	else
		printf("Succeed task 11 test 2.\n");


	//Task 12// Is a prime number
	if (isPrime(99,2) != 0)
		printf("Failed task 12 test 1.\n");
	else
		printf("Succeed task 12 test 1.\n");
	if (isPrime(13,2) != 1)
		printf("Failed task 12 test 2.\n");
	else
		printf("Succeed task 12 test 2.\n");

	//Task 13// Biggest divider
	if (biggestDivider(1005, 105) != 15)
		printf("Failed task 13 test 1.\n");
	else
		printf("Succeed task 13 test 1.\n");
	if (biggestDivider(900, 800) != 100)
		printf("Failed task 13 test 2.\n");
	else
		printf("Succeed task 13 test 2.\n");

	//Task 14// Every two numbers sum is multiply of 3
	int arr3[5] = { 10, 41, 1, 5, 22 };//1
	int arr4[5] = { 3,6,30,5,7 };//0
	if (multiply3(arr3, 5) != 1)
		printf("Failed task 14 test 1.\n");
	else
		printf("Succeed task 14 test 1.\n");
	if (multiply3(arr4, 5) != 0)
		printf("Failed task 14 test 2.\n");
	else
		printf("Succeed task 14 test 2.\n");

	printf("DONE!");

	return 0;
}