#include<stdio.h>
#include<conio.h>
void main()
	{
       long int n,i,fact=1;
       clrscr();
       printf("Enter an integer:");
       scanf("%ld",&n);
       if (i<=n)
       {
       for(i=1;i<=n;i++)
       {fact*=i;
       }
       printf("Factorial of %ld=%ld",n,fact);
	if (n<0)
       printf("factorial does not exist");
       }
       getch();
       }