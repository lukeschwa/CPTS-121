#include "functions.h"
double read_double(FILE *infile) {
	double number_double = 0.0;
	fscanf(infile, "%lf", &number_double);
	return number_double;
}

int read_integer(FILE *infile) {
	int number_int = 0;
	fscanf(infile, "%d", &number_int);
	return number_int;
}

double calculate_sum(double number1, double number2, double number3, double number4, double number5) {
	double total = 0.0;
	total = number1 + number2 + number3 + number4 + number5;
	return total;
}

double calculate_mean(double sum, int number) {
	double value = -1;
	value = sum / number;
	return value;
}

double calculate_deviation(double number, double mean) {
	double value = 0;
	value = number - mean;
	return value;
}

double calculate_variance(double deviation1,
	double deviation2, double deviation3,
	double deviation4, double deviation5, int number) {
	double value = (deviation1*deviation1) + (deviation2*deviation2) + (deviation3*deviation3) + (deviation4*deviation4) + (deviation5*deviation5);
	value = calculate_mean(value, number);
	return value;
}

double calculate_standard_deviation(double variance) {
	double value = 0;
	value = sqrt(variance);
	return value;
}

double find_min(double number1, double number2, double number3, double number4, double number5) {
	double min_value = 0.0;
	min_value = number1;
	if (number2 < min_value)
	{
		min_value = number2;
	}
	if (number3 < min_value)
	{
		min_value = number3;
	}
	if (number4 < min_value)
	{
		min_value = number4;
	}
	if (number5 < min_value)
	{
		min_value = number5;
	}
	return min_value;
}
double find_max(double number1, double number2, double number3, double number4, double number5) {
	double max_value = 0.0;
	max_value = number1;
	if (number2 > max_value) {
		max_value = number2;
	}
	if (number3 > max_value) {
		max_value = number3;
	}
	if (number4 > max_value) {
		max_value = number4;
	}
	if (number5 > max_value) {
		max_value = number5;
	}
	return max_value;
}
void print_double(FILE *outfile, double number) {
		fprintf(outfile,"%.2lf\n",number);
		return;
	}



	


