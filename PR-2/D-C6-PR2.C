#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&a);

	(a%2 == 0)
		?printf("The number is even\n")
		:printf("The number is odd");
	getch();
}