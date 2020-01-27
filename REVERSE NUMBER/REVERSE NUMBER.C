#include<stdio.h>
#include<conio.h>
void main()
	{
	long int num,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%ld",&num);
	while(num>0)
	{
	sum=sum*10+num%10;
	num/=10;
	}
	printf("Reverse number is %ld",sum);
	getch();
	}