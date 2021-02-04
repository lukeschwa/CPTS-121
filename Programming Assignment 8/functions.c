/**********************************************************************************************
* Programmer: Luke Schauble																	 *
* Class: CptS 121, Lab 7                                                                     *
* Programming Assignment: 8                                                                  *
* Created: November 27th,2018                                                                *
* Last Revised: December 4th,2018                                                            *
* Description: multiple functions demonastraiting concepts taught throughout the year        *
*********************************************************************************************/
#include "functions.h"
char *my_str_n_cat(char *destination, char *source) {
	int dest_length = 0, source_length = 0, str_size = 0, i = 0;
	char str[MAX];

	for (i = 0; destination[i] != NULL; i++) {
		dest_length++;
	}
	for (i = 0; source[i] != NULL; i++) {
		source_length++;
	}
	str_size = source_length + dest_length;
	str[str_size] = NULL;

	for (i = 0; i < dest_length; i++) { 
		str[i] = destination[i]; 
	}

	for (i = dest_length; i < str_size; i++) { 
		str[i] = source[i - dest_length];
	}
	return str;

}

int binary_search(int array[],int target) {
	int size = 29, found = 0;
	int left = 0, right = size - 1, midpoint;

	while (left <= right) {
		midpoint = (left + right) / 2;
		if (target == array[midpoint]) {
			found = 1;
			break;
		}
		else {
			if (target > array[midpoint]) {
				left = midpoint + 1;
			}
			else {
				right = midpoint - 1;
			}
		}
	}

	if (found == 1) {
		printf("The number %d was found at position %d .", target, midpoint + 2);
	}
	else {
		printf("The number %d was not found.",target);
	}
	return 0;
}

void bubble_sort(int *array[]) {
	int temp, i, j;

	for (i = 15 - 2; i >= 0; i--) {

		for (j = 0; j <= i; j++) {

			if (array[j] > array[j + 1]) {

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

			}
		}
	}
	printf("Sorted: ");
	for (i = 0; i < 15; i++) {
		printf(" %d", array[i]);
	}

}
int is_palindrome(char *string, int length, int i) {
	if (length % 2 == 1) {
		if (i + 1 == ((int)(length / 2))) {
			return 1;
		}
	}
	if (((int)(length / 2)) == i) {
		return 1;
	}
	if (string[i] != string[length - i - 1]) {
		return 0;
	}
	i++;
	return is_palindrome(string, length, i);
}

int check_prime(int n) {
	int x = 2, mod = n % x;

	while ((x != n) && (mod != 0)) {
		mod = n % x;
		x = x + 1;
	}

	if (x == n) {

		return n;
	}
	else if (x != n) {
		return 0;
	}

		
	
}
int sum_primes(unsigned int n){

	if (n >= 2){
		n = check_prime(n) + sum_primes(n - 1); 
		return n;
	}
	else{
		return 0; 
	}

}
Occurrences maximum_occurences(char *str, Occurrences *occr, int *num, char *args) { 
	int length = strlen(str), chars = 0, highest_frequency = 0;
	char num_chars[37] = { '\0' }; // 26 letters,  numbers, 1 space
	num_chars[0] = str[0];

	for (int i = 0; i < length; i++) {
		char a = str[i];
		int add_freq = 1;

		for (int j = 0; j < 37; j++) {
			if (num_chars[j] == a)
				add_freq = 0;
		}
		if (add_freq == 1) {
			for (int j = 0; j < 37; j++)
				if (num_chars[j] == '\0') {
					num_chars[j] = a;
					break;
				}
		  }
	}
	
	for (int i = 0; i < 37; i++) {
		if (num_chars[i] != '\0') chars++;
	}

	for (int i = 0; i < chars; i++) {
		occr[i].character = num_chars[i]; 

		for (int j = 0; j < length; j++) {

			if (str[j] == num_chars[i]) {
				occr[i].num_occurrences++;
			}
		}

		occr[i].frequency = (double)occr[i].num_occurrences / length; 
	}


	for (int i = 0; i < chars; i++) {

		if (occr[i].num_occurrences > occr[highest_frequency].num_occurrences) {
			highest_frequency = i;
		}
	}
	return occr[highest_frequency];
}

