/*******************************************************************************************
* Programmer: Luke Schauble                                                                *
* Class: CptS 121, FAll  2018; Lab Section                                                 *
* Programming Assignment: Assignment 2                                                     *
* Date: September 13, 2018                                                                 *
* Description: This program evaluates the solution to multiple equations in a 3 file format*
*******************************************************************************************/
#include "equations.h"
int main() {
	//Equation1
	double mass = 0.0, acceleration = 0.0;
	printf("Newton's 2nd Law - Enter the mass, then the Acceleration: ");
	scanf_s("%lf", &mass);
	scanf_s("%lf", &acceleration);
	calculate_newtons_2nd_law(mass, acceleration);
	//Equation2
	double radius = 0.0, height = 0.0;
	printf("Volume of a cylinder - Enter the Radius, then the height: ");
	scanf_s("%lf", &radius);
	scanf_s("%lf", &height);
	calculate_volume_cylinder(radius, height);
	//Equation3
	char plaintext_character;
	int a = 0, shift = 0;
	printf("Encoding Characters - Enter a letter: ");
	scanf_s(" %c", &plaintext_character);
	printf("enter a number: ");
	scanf_s("%d", &a);
	printf("Enter the number you would like to shift by: ");
	scanf_s("%d", &shift);
	perform_character_encoding(plaintext_character, shift, a);
	//Equation4
	double x1, x2, y1, y2;
	printf("Distance formula - Please enter x1: ");
	scanf_s("%lf", &x1);
	printf("x2: ");
	scanf_s("%lf", &x2);
	printf("y1: ");
	scanf_s("%lf", &y1);
	printf("y2: ");
	scanf_s("%lf", &y2);
	calculate_distance_between_2pts(x1, x2, y1, y2);
	//Equation5
	double theta = 0.0;
	printf("Tangent - Please enter theta: ");
	scanf_s("%lf", &theta);
	calculate_tangent_theta(theta);
	//Equation6
	double r1 = 0, r2 = 0, r3 = 0;
	printf("Paralell Resistance - please enter r1,r2,and r3: ");
	scanf_s("%lf%lf%lf", &r1, &r2, &r3);
	calculate_paralell_resistance(r1, r2, r3);
	//Equation7
	double x = 0, y = 0, z = 0, aaa = 0;
	printf("General Equation - Please enter the X value: ");
	scanf_s("%lf", &x);
	printf("y: ");
	scanf_s("%lf", &y);
	printf("z: ");
	scanf_s("%lf", &z);
	printf("a: ");
	scanf_s("%lf", &aaa);
	calculate_general_equation(x, y, z, aaa);


	return 0;
}