#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int tableau[4];

	tableau[0] = 10;
	tableau[1] = 23;
	tableau[2] = 505;
	tableau[3] = 8;

	//printf("%d\n", tableau);// ici tableau est un pointeur sur la premiere case du tableau, on verra l'adresse ou se trouve le tableau//
	
	printf("%d\n", tableau[0]); // ici on va chercher la valeur de la premierecase du tableau//

	printf("%d\n", tableau[1]); //Renvoie la valeur de la 2de case
	
	printf("%d\n", *(tableau + 1));//Idem; renvoie a la valeur de la 2de case
	printf("%d\n", *(tableau + 3)); // Renvoie a la valeur de la 4eme case

	return 0;
}
