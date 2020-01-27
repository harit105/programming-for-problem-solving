#include<stdio.h>
#include<conio.h>
void main()
	{
	int i,n,a1=0,a2=1,a3;
	clrscr();
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Fibonacci series is:");
	for(i=1;i<=n;++i)
	{
	a3=a1+a2;
	a1=a2;
	a2=a3;
	printf("%d",a3);
	}
	getch();
	}