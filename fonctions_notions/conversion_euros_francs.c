#include <stdlib.h>
#include <stdio.h>

double conversion(double euros)
{
	double francs = 0;
	return 6.55957 * euros;
}

double invers_conversion(double francs)
{
	double euros = 0;
	return francs / 6.55957;
}

int main(int argc, char *argv[])
{
	printf("50 euros = %ffrancs\n", conversion(50));
	printf("10 euros = %ffrancs\n", conversion(10));
	printf("30 euros = %ffrancs\n", conversion(30));
	printf("1 francs = %feuros\n", invers_conversion(1));
	printf("10 francs = %feuros\n", invers_conversion(10));
	printf("300 francs = %feuros\n", invers_conversion(300));

	return 0;
}
