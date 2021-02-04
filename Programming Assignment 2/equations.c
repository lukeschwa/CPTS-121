/*******************************************************************************************
* Programmer: Luke Schauble                                                                *
* Class: CptS 121, FAll  2018; Lab Section                                                 *
* Programming Assignment: Assignment 2                                                     *
* Date: September 13, 2018                                                                 *
* Description: This program evaluates the solution to multiple equations in a 3 file format*
*******************************************************************************************/
#include "equations.h"
double calculate_newtons_2nd_law(double mas, double acc){
	double force = 0.0;
	force = mas * acc;
	printf("The Force is: %.2lf \n", force);
	return force;
}
double calculate_volume_cylinder(double rad, double hei) {
	double volume = 0.0;
	volume = PI*(rad*rad)*hei;
	printf("The volume of the cylinder is: %.2lf \n", volume);
	return volume;
}
char perform_character_encoding(char plaintext_char, int shi, int a) {
	char encoded_character;
	encoded_character = ((plaintext_char - 'A') + 'a' - shi);
	printf("Your character is: %c \n", encoded_character);
	return encoded_character;
}
double calculate_distance_between_2pts(double xone, double xtwo, double yone, double ytwo) {
	double distance = 0.0;
	distance = ((xtwo - xone)*(xtwo - xone)) + ((ytwo - yone)*(ytwo - yone));
	printf("The distance between these two points is: %.2lf", distance);
	return distance;
}
double calculate_tangent_theta(double the) {
	double tan_theta = 0.0;
	tan_theta = sin(the) / cos(the);
	printf("The tangent of theta is: %.2lf: ", tan_theta);
	return tan_theta;
}
double calculate_paralell_resistance(double rr1, double rr2, double rr3) {
	double paralell_resistance = 0.0;
	paralell_resistance = paralell_resistance = 1 / ((1 / rr1) + (1 / rr2) + (1 / rr3));
	printf("The paralell resistance is: %.2lf \n ", paralell_resistance);
	return paralell_resistance;
}
double calculate_general_equation(double xx, double yy, double zz, double aa) {
	double sum = 0.0;
	sum = ((double)2 / 3) - yy + zz*xx / ((int)aa % 2) + PI;
	printf("The Value of the equation is: %.2lf \n", sum);
	return sum;
}
