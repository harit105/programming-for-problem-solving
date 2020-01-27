#include<stdio.h>
#include<conio.h>
void main()
	{
	int a[100],i,n,min,max;
	printf("Enter size of the array:");
	scanf("%d",&n);
	printf("Enter Elements in array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
	if(min>a[i])
	min=a[i];
	if(max<a[i])
	max=a[i];
	}
	printf("Minimum value is %d",min);
	printf("\n Maximum value is %d",max);
	getch();
	}