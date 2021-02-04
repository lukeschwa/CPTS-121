/**********************************************************************************************
* Programmer: Luke Schauble																	 *
* Class: CptS 121, Lab 7                                                                     *
* Programming Assignment: 8                                                                  *
* Created: November 27th,2018                                                                *
* Last Revised: December 4th,2018                                                            *
* Description: multiple functions demonastraiting concepts taught throughout the year        *
*********************************************************************************************/
#include "functions.h"

int main(void) {
	//my_str_n_cat() Example
	char *source = "Luke Schauble", *destination = "Hi, my name is ";
	printf("PROBLEM ONE\n");
	printf("Source: Luke Schauble             Destination: Hi my name is\n\n");
	printf("Completed string: %s \n\n", my_str_n_cat(destination, source));
	//_______________________________________________________________________
	//Bianary search example
	int binary_array[29] = { 1,2,3,4,5,6,12,15,20,24,26,31,42,43,45,52,58,63,67,71,72,73,76,87,92,93,99,101,103 };
	int bubble_array[15] = { 15,9,101,86,94,121,7,23,56,868,32,791,600,412,1002 };
	int num = 0;
	printf("PROBLEM 2\n");
	printf("Enter a number: ");
	scanf_s("%d", &num);
	binary_search(binary_array, num);
	printf("\n\n");
	//_______________________________________________________________________
	//Bubble sort example
	int i = 0;
	printf("PROBLEM 3\nOriginal array: ");
	
	for (i = 0; i < 15; i++) {
		printf("%d, ", bubble_array[i]);
	}
	printf("\nSorted: ");
	bubble_sort(bubble_array);
	//_______________________________________________________________________
	//Palindrome example
	int length = 7, is_pal = -1;
	char *string = "racecar";
	is_pal = is_palindrome(string, length, 0);
	
	printf("\n\nPROBLEM 4\nOriginal word: racecar\n");
	if (is_pal == 1) {
		printf("String is a palindrome\n\n");
	}
	else {
		printf("String is  not a palindrome\n\n");
	}
	//________________________________________________________________________
	//Primes Example
	printf("PROBLEM 5\n");
	unsigned int sum = 13;
	printf("Sum of primes: %d\n\n", sum_primes(sum));
	//________________________________________________________________________
	//Frequency Example
	printf("PROBLEM 6\n");
	Occurrences occr[37] = { '\0', 0, 0.0 };
	Occurrences example = maximum_occurences("supercalifragilisticexpialidocious", occr, 0, 'c');
	printf("Original String: supercalifragilisticexpialidocious\n");
	printf("Most frequent character: %c\n", example.character);
	printf("Number of times occurred: %d\n", example.num_occurrences);
	printf("Perecent of times %c occurred: %.2lf%\n", example.character, example.frequency);
	//_________________________________________________________________________

}