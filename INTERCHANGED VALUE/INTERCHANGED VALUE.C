#include<stdio.h>
#include<conio.h>
void main()
	{
	int a,b,temp;
	clrscr();
	printf("Enter a number a=");
	scanf("%d",&a);
	printf("Enter another number b=");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("Interchanged values are a=%d, b=%d",a,b);
	getch();
	}