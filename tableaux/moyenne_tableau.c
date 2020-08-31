#include <stdio.h>

double moyenne_tableau(int tableau[], int taille_tableau);

int main(int argc, char *argv[])
{
	int tableau[5] = {23, 45, 1, 3, 10};

	moyenne_tableau(tableau, 5);
	return 0;
}

double moyenne_tableau(int tableau[], int taille_tableau)
{
	int i, som, moy;
	som = 0;
	moy = 0;

	for(i = 0; i < taille_tableau; i++)
	{
		som = som + tableau[i];
	}

	moy = som / taille_tableau;
	printf("La moyenne des entiers du tableau est: %d\n", moy);
	return moy;
}

