/*****************
Author:Harit shah
Description:Program to determine the area of triangle.
//Test cases:
b=12,h=5.9
Enter header files(stores predefined library functions I/O)
*********/
#include<stdio.h>
#include<conio.h>
/***
input:base and height
output:void
***/
void main()
	{
//variable declaration..float(for decimal values also)
	float base,height,area;
	clrscr();
//input
	printf("Enter the base of a triangle:");
	scanf("%f",&base);
	printf("Enter the height of a triangle:");
	scanf("%f",&height);
//formula for finding area
	area=(base*height)/2;
	printf("Area of triangle=%f sq.units",area);
//Processing output
	getch();
	}