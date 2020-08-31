#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 10;
	int *pointeurSurAge; //Je cree un pointeur
	pointeurSurAge = &age;//Pointeur sur age contient la valeur de l'adresse de la variable age
	printf("La variable age vaut : %d\n", age);
	printf("L'adresse de la variable est : %p\n", &age);
	printf("%d\n", *pointeurSurAge); //'*' devant pointeur ici signifie: Je veux la valeur de la variable sur laquelle pointe monpointeurSurAge//
	return (0);
}

