#include "functions.h"
int main(void) {
	FILE *infile = NULL, *outfile = NULL;
	int id1, id2, id3, id4, id5; //id number
	double gp1, gp2, gp3, gp4, gp5, sum_of_gpa, mean_of_gpa; //gpa
	int cs1, cs2, cs3, cs4, cs5, sum_of_cs;//class standings
	double mean_of_class_standings; 
	double age1, age2, age3, age4, age5, sum_of_age, mean_of_age; //age
	double gpa_deviation1, gpa_deviation2, gpa_deviation3, gpa_deviation4, gpa_deviation5;
	double gpa_varience;
	double gpa_standev;
	double min_gpa, max_gpa;
	//open files to read from and write to
	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat", "w");
	//student 1
	id1 = read_integer(infile);
	gp1 = read_double(infile);
	cs1 = read_integer(infile);
	age1 = read_double(infile);
	//student2
	id2 = read_integer(infile);
	gp2 = read_double(infile);
	cs2 = read_integer(infile);
	age2 = read_double(infile);
	//student3
	id3 = read_integer(infile);
	gp3 = read_double(infile);
	cs3 = read_integer(infile);
	age3 = read_double(infile);
	//student4
	id4 = read_integer(infile);
	gp4 = read_double(infile);
	cs4 = read_integer(infile);
	age4 = read_double(infile);
	//student5
	id5 = read_integer(infile);
	gp5 = read_double(infile);
	cs5 = read_integer(infile);
	age5 = read_double(infile);
	//sum calculations
	sum_of_gpa = calculate_sum(gp1, gp2, gp3, gp4, gp5);
	sum_of_cs = calculate_sum(cs1, cs2, cs3, cs4, cs5);
	sum_of_age = calculate_sum(age1, age2, age3, age4, age5);
	//mean of gpa______________________________
	mean_of_gpa = calculate_mean(sum_of_gpa, 5);
	print_double(outfile, mean_of_gpa);
	
	//mean of class standings______________________________
	mean_of_class_standings = calculate_mean(sum_of_cs, 5);
	print_double(outfile, mean_of_class_standings);
	
	//mean of age__________________________________
	mean_of_age = calculate_mean(sum_of_age, 5);
	print_double(outfile, mean_of_age);
	//deviation___________________________________________
	gpa_deviation1 = calculate_deviation(gp1, mean_of_gpa);
	gpa_deviation2 = calculate_deviation(gp2, mean_of_gpa);
	gpa_deviation3 = calculate_deviation(gp3, mean_of_gpa);
	gpa_deviation4 = calculate_deviation(gp4, mean_of_gpa);
	gpa_deviation5 = calculate_deviation(gp5, mean_of_gpa);
	//variance__________________________________________________________________________________________________________
	gpa_varience = calculate_variance(gpa_deviation1, gpa_deviation2, gpa_deviation3, gpa_deviation4, gpa_deviation5, 5);
	//standard deviation______________________________________
	gpa_standev = calculate_standard_deviation(gpa_varience);
	print_double(outfile, gpa_standev);
	//minimum gpa________________________________
	min_gpa = find_min(gp1, gp2, gp3, gp4, gp5);
	print_double(outfile, min_gpa);
	//maximum gpa_______________________________
	max_gpa = find_max(gp1, gp2, gp3, gp4, gp5);
	print_double(outfile, max_gpa);

	fclose(infile);
	fclose(outfile);
	return 0;


	
	

	
}