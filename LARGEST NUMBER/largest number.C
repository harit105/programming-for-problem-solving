#include<stdio.h>
#include<conio.h>
void main()
	{
	float num1,num2,num3;
	clrscr();
	printf("Enter three numbers:");
	scanf("%f %f %f",&num1,&num2,&num3);
	if(num1>=num2)
	{
	if (num1>=num3)
	printf("%f is the largest number.",num1);
	else
	printf("%f is the largest number.",num3);
	}
	else {
	if(num2>=num3)
	printf("%f is the largest number.",num2);
	else
	printf("%f is the largest number.",num3);
	}
	getch();

	}