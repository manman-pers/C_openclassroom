#include <stdio.h>

/*
 **Prototype de la fonction
 */
int somme_tableau(int tableau[], int taille_tableau);

int main(int argc, char *argv[])
{
	int tableau[4] = {3, 5, 90, 23};

	somme_tableau(tableau, 4);

	return 0;
}

int somme_tableau(int tableau[], int taille_tableau)
{
	int i, som;
	som = 0;
	
/*
 ** Affiche tableau
 */
	for(i = 0; i < taille_tableau; i++)
	{
		printf("La valeur %d du tableau est: %d\n", i+1, tableau[i]);
		som = som + tableau[i];
	}

	printf("La somme des valeurs du tableau est: %d\n", som);

	return som;

