#include "Recursion.h"
/*
int factorial(int n)
{
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

int biggestInArray(int arr[], int size)
{
	if (size == 0)
		return arr[0];
	int biggest = biggestInArray(arr, size - 1);
	if (biggest > arr[size - 1])
		return biggest;
}

int fibonacci(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int isArrayPositive(int arr[], int size)
{
	if (size == 0)
		return 1;
	if (arr[size - 1] < 0)
		return 0;
	isArrayPositive(arr, size - 1);
}

int isCharExist(char* str, char c)
{
	if (*str == '\0')
		return 0;
	if (*str == c)
		return 1;
	return isCharExist(str + 1, c);
}

int countSameChars(char* str, char c)
{
	if (*str == '\0')
		return 0;
	if (*str == c)
		return 1 + countSameChars(str + 1, c);
	return countSameChars(str + 1, c);
}

int powerOfANumber(int n, int m)
{
	if (m == 0)
		return 1;
	return n * powerOfANumber(n, m - 1);
}

int divider(int n1, int n2)
{
	if (n1 < 0)
		return 0;
	if (n1 == 0)
		return 1;
	return divider(n1 - n2, n2);
}

double decToBinary(int num)
{
	if (num == 0)
		return 0;
	double binary = decToBinary(num / 2);
	return (binary * 10) + (num % 2);
}

int countBlanks(char* str)
{
	if (*str == '\0')
		return 0;
	if (*str == ' ')
		return 1 + countBlanks(str + 1);
	return countBlanks(str + 1);
}

int countDigits(int num)
{
	if (num == 0)
		return 0;
	return 1 + countDigits(num / 10);
}

int isPrime(int num, int div)
{
	if (num == 0)
		return 1;
	if (num / 2 <= div)
		return 1;
	if (num % div == 0)
		return 0;
	return isPrime(num, div + 1);
}

int biggestDivider(int n1, int n2)
{
	if (n2 != 0)
		return biggestDivider(n2, n1 % n2);
	else
		return n1;
}

int multiply3(int arr[], int size)
{
	if (size == 1)
		return 1;
	if ((arr[0] + arr[1]) % 3 != 0)
		return 0;
	if ((arr[0] + arr[1]) % 3 == 0)
		return multiply3(arr + 1, size - 1);
}
*/