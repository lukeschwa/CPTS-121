/*******************************************************************************************
* Programmer: Luke Schauble                                                                *
* Class: CptS 121, FAll  2018; Lab Section                                                 *
* Programming Assignment: Assignment 1                                                     *
* Date: August 29, 2018                                                                    *
* Description: This program evaluates the solution to multiple equations                   *
*******************************************************************************************/
#include <stdio.h>
#include <math.h>
int main() {
	    //Equation 1
			double mass = 0, acceleration = 0;
			printf("CALCULATING FORCE:\n Please enter mass first, then acceleration \n");
			scanf_s("%lf%lf", &mass, &acceleration);
			double force = mass * acceleration;
			printf("The Force is:%lf\n", force);
		//Equation 2
			double radius = 0, height = 0, pi = 3.14159;
			printf("VOLUME OF A CYLINDER \n Please enter the radius and the height");
			scanf_s("%lf%lf", &radius, &height);
			double radius_squared = radius * radius;
			double volume_cylinder = pi * radius_squared* height;
			printf("The volume of the cylinder is:%lf\n", volume_cylinder);
		//Equation 3
			char encoded_character, plaintext_character;
			int a = 0, shift = 0;
			printf("ENCODING CHARACTERS \n enter a letter: ");
			scanf_s(" %c", &plaintext_character);
			printf("enter a number");
			scanf_s("%d", &a);
			printf("Enter the number you would like to shift by: ");
			scanf_s(" %d", &shift);
			encoded_character = (plaintext_character - 'A') + 'a' - shift;
			printf("Encoded:  %c\n", encoded_character);
		//Equation 4
			double x1, x2, y1, y2, distance;
			printf("DISTANCE FORMULA \n Please enter x1: ");
			scanf_s("%lf", &x1);
			printf("x2: ");
			scanf_s("%lf", &x2);
			printf("y1: ");
			scanf_s("%lf", &y1);
			printf("y2: ");
			scanf_s("%lf", &y2);
			distance = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));
			printf("The distance between these points is: %lf\n", sqrt(distance));
		//Equation 5		
			double theta = 0, tan_theta = 0;
			printf("TANGENT \n please enter theta: ");
			scanf_s("%lf", &theta);
			tan_theta = sin(theta) / cos(theta);
			printf("The tangent is: %lf\n", tan_theta);
		//Equation 6
			double r1 = 0, r2 = 0, r3 = 0;
			double paralell_resistance = 0;
			printf("PARALELL RESISTANCE \n please enter r1,r2,and r3: ");
			scanf_s("%lf%lf%lf", &r1, &r2, &r3);
			paralell_resistance = 1 / ((1 / r1) + (1 / r2) + (1 / r3));
			printf("The paralell resistance is: %lf \n ", paralell_resistance);
		//Equation 7
			double x = 0, y = 0, z = 0, aa = 0, pii = 3.14159;
			double sum = 0;
			printf("GENERAL EQUATION \n Please enter the X value: ");
			scanf_s("%lf", &x);
			printf("y: ");
			scanf_s("%lf", &y);
			printf("z: ");
			scanf_s("%lf", &z);
			printf("a: ");
			scanf_s("%lf", &aa);
			sum = ((double)2 / 3) - y + z*x / ((int)aa % 2) + pii;
			printf("The answer is: %lf \n", sum);
		


return 0;
}