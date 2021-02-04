/**********************************************************************************************
* Programmer: Luke Schauble																	 *
* Class: CptS 121, Lab 7                                                                     *
* Programming Assignment: 8                                                                  *
* Created: November 27th,2018                                                                *
* Last Revised: December 4th,2018                                                            *
* Description: multiple functions demonastraiting concepts taught throughout the year        *
*********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 999999

char *my_str_n_cat(char *destination, char *source);
int binary_search(int arr[], int target);
void bubble_sort(int *array[]);
int is_palindrome(char *string, int length, int i);
int check_prime(int n);
int sum_primes(unsigned int n);


typedef struct occurrences
{
	char character;
	int num_occurrences;
	double frequency;
} Occurrences;
Occurrences maximum_occurences(char *str, Occurrences *occr, int *num, char *args);
