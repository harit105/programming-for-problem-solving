/*********
Author:Harit Shah
Description:Program to perform a Calculator
Test cases:
1 and 3,5 and 6
Enter header file(Stores predefined library functions I/0)
*********/
#include<stdio.h>
#include<conio.h>
/*****
input:a,b,sum,diff,division,multiplication
output:void
*****/
void main()
	{
//variable declaration...float(for decimal values)
	float a,b,sum,difference,division,multiplication;
	clrscr();
//input
	printf("Enter a number=");
	scanf("%f",&a);
	printf("\nEnter another number=");
	scanf("%f",&b);
//Formula for summation
	sum=a+b;
//Formula for difference
	difference=a-b;
//Formula for division
	division=a/b;
//Formula for multiplication
	multiplication=a*b;
	printf("sum=%f",sum);
	printf("\ndifference=%f",difference);
	printf("\ndivision=%f",division);
	printf("\nmultiplication=%f",multiplication);
//processing output
	getch();
	}
