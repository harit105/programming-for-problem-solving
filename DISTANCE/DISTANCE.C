#include<stdio.h>
#include<conio.h>
void main()
	{
	float kilometer,feet,inch,centimeter,meter;
	clrscr();
	printf("Enter the distance between two cities(in km):");
	scanf("%f",&kilometer);
	meter=kilometer*1000;
	printf("\n Distance in meters=%f",meter);
	centimeter=kilometer*100000;
	printf("\n Distance in centimeters=%f",centimeter);
	feet=kilometer*3280.84;
	printf("\n Distance in feet=%f",feet);
	inch=kilometer*39370;
	printf("\n Distance in inch=%finches",inch);
	getch();
	}
