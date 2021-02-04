/*******************************************************************************************
* Programmer: Luke Schauble                                                                *
* Class: CptS 121, FAll  2018; Lab Section                                                 *
* Programming Assignment: Assignment 2                                                     *
* Date: September 13, 2018                                                                 *
* Description: This program evaluates the solution to multiple equations in a 3 file format*
*******************************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.14159
/*******************************************************************************************
* Function Name:calculate_newtons_2nd_law
  Description:Calculates newtons second law
* Parameters:mas,acc
* Inputs:user inputs mass and acceleration      
* Return:force                                                       

*******************************************************************************************/
double calculate_newtons_2nd_law(double mas, double acc);
/*******************************************************************************************
* Function Name:calculate_volume_cylinder
Description:Calculates the volume of a cylinder
* Parameters:rad,hei
* Inputs:user inputs radius and height
* Return:volume
*******************************************************************************************/
double calculate_volume_cylinder(double rad, double hei);
/*******************************************************************************************
* Function Name:preform_character_encoding
Description:encodes a character
* Parameters:plaintext_char,shi,a
* Inputs:user inputs a letter, and two numbers
* Return:encoded_character
*******************************************************************************************/
char perform_character_encoding(char plaintext_char, int shi, int a);
/*******************************************************************************************
* Function Name:calculate_distance_between_2pts
Description:Ccalculates the distance between two points on a coordenate plane
* Parameters:xone,xtwo,yone,ytwo
* Inputs:user inputs x1,x2,y1,y2
* Return:distance
*******************************************************************************************/
double calculate_distance_between_2pts(double xone, double xtwo, double yone, double ytwo);
/*******************************************************************************************
* Function Name:calculate_tangent_theta
Description:calculates tangent
* Parameters:theta
* Inputs:user inputs theta
* Return:tangent
*******************************************************************************************/
double calculate_tangent_theta(double the);
/*******************************************************************************************
* Function Name:calculate_paralell_resistance
Description:Calculates paralell resistance
* Parameters:rr1,rr2,rr3
* Inputs:user inputs r1,r2,r3
* Return:paralell_resistance
*******************************************************************************************/
double calculate_paralell_resistance(double rr1, double rr2, double rr3);
/*******************************************************************************************
* Function Name:calculate_general_equation
Description:Calculates the value of the equation
* Parameters:xx,yy,zz,aa
* Inputs:user inputs x,y,z,a
* Return:sum
*******************************************************************************************/
double calculate_general_equation(double xx, double yy, double zz, double aa);

