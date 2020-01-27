#include<stdio.h>
#include<conio.h>
void main()
	{
	float celsius,fehrenheit;
	clrscr();
	printf("Please enter temperature in fehrenheit:");
	scanf("%f",&fehrenheit);
	celsius=(fehrenheit-32)*5/9;
	printf("\n %f fehrenheit=%fcelsius",fehrenheit,celsius);
	getch();
	}