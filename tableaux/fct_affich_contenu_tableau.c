#include <stdio.h>

/*
** Prototype de la fonction d'affichage
*/
void affiche(int tableau[], int taille_tableau);

int main(int argc, char *argv)
{
	int tableau[5] = {3, 6, 9, 12, 7};

	/*
	**On affiche le contenu du tableau
	*/
	affiche(tableau, 5);

	return 0;
}

void affiche(int tableau[], int taille_tableau)
{
	int i;

	for(i = 0; i < taille_tableau; i++)
	{
		printf("%d\n", tableau[i]);
	}
}
