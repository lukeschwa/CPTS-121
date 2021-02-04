#include <stdio.h>
#include <math.h>
/*************************************************************
* Function: read_double()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: Reads a double from the input file
* Input parameters: input file
* Returns: a variable type double
*************************************************************/
double read_double(FILE *infile);
/*************************************************************
* Function: read_integer()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: Reads a integer from the input file
* Input parameters: input file
* Returns: a variable type int
*************************************************************/
int read_integer(FILE *infile);
/*************************************************************
* Function: calculate_sum
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: calculates the sum of 5 numbers
* Input parameters: 5 numbers
* Returns: sum
*************************************************************/
double calculate_sum(double number1, double number2, double number3, double number4, double number5);
/*************************************************************
* Function: calculate_mean()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: calculates the mean of 5 numbers
* Input parameters: sum,number
* Returns: mean
*************************************************************/
double calculate_mean(double sum, int number);
/*************************************************************
* Function: calculate_deviation()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: calculates the deviation
* Input parameters: deviation1,deviation2,deviation3,deviation4,deviation5
* Returns: deviation
*************************************************************/
double calculate_deviation(double number, double mean);
/*************************************************************
* Function: calculate_variance()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: calculates the variance
* Input parameters: number,mean
* Returns: variance
*************************************************************/
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);
/*************************************************************
* Function: calculate_standard_deviation()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: calculates standard deviation
* Input parameters: variance
* Returns: standard deviation
*************************************************************/
double calculate_standard_deviation(double variance);
/*************************************************************
* Function: find_max()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: finds the maximum gpa
* Input parameters: number1,number2,number3,number4,number5
* Returns: max
*************************************************************/
double find_max(double number1, double number2, double number3, double number4, double number5);
/*************************************************************
* Function: find_min()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: finds the minimum gpa
* Input parameters: number1,number2,number3,number4,number5
* Returns: min
*************************************************************/
double find_min(double number1, double number2, double number3, double number4, double number5);
/*************************************************************
* Function: print_double()
* Date Created: September 20th, 2018
* Date Last Modified: September 20th, 2018
* Description: prints a double to the output file
* Input parameters: output file, number
* Returns: nothing
*************************************************************/
void print_double(FILE *outfile, double number);
