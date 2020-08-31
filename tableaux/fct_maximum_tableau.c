#include <stdio.h>

void maximum_tableau(int tableu[], int taille_tableau, int valeur_max);

void affiche(int tableau[], int taille_tableau);

int main(int argc, char *argv[])
{
	int tableau[4] = {0, 10, 4, 5};
	int valeur_max = 10;

	maximum_tableau(tableau, 4, 30);
	affiche(tableau, 4);
	return 0;
}

void maximum_tableau(int tableau[], int taille_tableau, int valeur_max)
{
	int i;
	i = 0;

	for(i = 0; i < taille_tableau; i++)
	{
		if(tableau[i] > valeur_max)
		{
			tableau[i] = 0;
		}
	}
}

void affiche(int tableau[], int taille_tableau)
{
	int i;

	for(i = 0; i < taille_tableau; i++)
	{
		printf("%d\n", tableau[i]);
	}
}
