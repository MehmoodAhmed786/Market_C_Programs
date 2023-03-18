#include<stdio.h>
int main()
{
	int a,b;
	int P,L=100000;
	int r=(L*4)/100;
	int n=30;
	a= L*(r*n*(1 + r));
	b=(1+r)*(n-1);
	P =L*(r*n*(1 + r))/((1+r)*(n-1));
	printf("Monthly payment: %d",P);
	return 0;
}
