#include<stdio.h>
#include<conio.h>
void main()
	{
	int m;
	clrscr();
	printf("Enter marks:");
	scanf("%d",&m);
	if(m>=80 && m<=100)
	{
	printf("Distinction");
	}                      else if(m>=60 && m<80)
	{
	printf("First class");
	}
	else if(m>=35 && m<60)
	{
	printf("Second class");
	}
	else if(m>=0 && m<35)
	{
	printf("Fail");
	}
	else
	{
	printf("Invalid number");
	}
	getch();
	}