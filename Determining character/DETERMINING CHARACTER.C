//Author:Harit shah
//Description:Program to determine a character.

//Test cases:
//character input:1,A,a,&,$
//Enter header files(stores predefined library functions I/0)
#include<stdio.h>
#include<conio.h>
// function to determine the character
//input:character
//output:void

void main()
	{
//variable declaration
	char ch;
	clrscr();
//input
	printf("Enter any character:");
	scanf("%c",&ch);
//catogorization of character via if else ladder
	if (ch>=65 && ch<=90)
	printf(" Character is a capital letter..Just like you..TALL");
	else if (ch>=97 && ch<=122)
	printf("Character is a small letter...But you're BIG");
	else if (ch>=48 && ch<=57)
	printf("Character is a digit aannd You're NUMBER 1!");
	else if ((ch>0 && ch<=47) || (ch>=58 && ch<=64))
	 printf("Character is a special symbol... And you are Special too!;)");
//processing the output.
	 getch();
	 }
