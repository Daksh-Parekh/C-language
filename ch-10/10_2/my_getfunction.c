#include<stdio.h>

float getgrade()
{
	int s1,s2,s3,s4,s5,s6,s7;
	
	printf("Enter the marks of Account: ");
	scanf("%d",&s1);
	printf("Enter the marks of Stats: ");
	scanf("%d",&s2);
	printf("Enter the marks of Eco: ");
	scanf("%d",&s3);
	printf("Enter the marks of Oc: ");
	scanf("%d",&s4);
	printf("Enter the marks of English: ");
	scanf("%d",&s5);
	printf("Enter the marks of Gujarati: ");
	scanf("%d",&s6);
	printf("Enter the marks of Computer: ");
	scanf("%d",&s7);
	
	float sum;
	sum = ((float)(s1+s2+s3+s4+s5+s6+s7)/700)*100;

	return sum;
}
//array call by refrence 

int getInt()
{
	int n;
	scanf("%d",&n);
	
	return n;	
}

void arrayInput(int a[],int n)
{
	int i;
	
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		a[i]=getInt();
	}
}

void arrayOutput(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: %d\n",i,a[i]);
	}
}

int Arraylength()
{
	int n;
	printf("Enter Array Length: ");
	n=getInt();
	return n;
}
