#include<stdio.h>

#include "mean.h"

int main()
{
	double v1,v2, m1, m2;
	v1=5.2;
	v2=7.9;
	m1=mean(v1,v2);
	m2=sub(v1,v2);
	
	printf("\nThe mean of %3.2f and %3.2f is \n", v1,v2);
	printf("\nThe subtraction of %3.2f and %3.2f \n", v1,v2);
	
	return 0;
}
