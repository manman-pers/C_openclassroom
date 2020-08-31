#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[])
{
	char nom[10];

	printf("Quel est votre nom?\n");
	fgets(nom, 10, stdin);
	printf("vous vous appelez %s !\n", nom);

	return 0;
}
