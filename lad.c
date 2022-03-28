#include<stdio.h>

#include "calc.h"

int main()
{
	int a,b, t;
	printf("\n\t****Welcome to Zilean***\n");
	printf("\nEnter two numbers - ");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("\nEnter the task you need to perform - ");
	scanf("%d", &t);
	
	if(t==1)
	{
		add(a,b);
	}
	else if(t==2)
	{
		sub(a,b);
	}
	else if(t==3)
	{
		mul(a,b);
	}
	else if(t==4)
	{
		div(a,b);
	}
	else if(t==5)
	{
		mod(a,b);
	}
	else
	{
		printf("\nInvalid option\n");
	}
}
