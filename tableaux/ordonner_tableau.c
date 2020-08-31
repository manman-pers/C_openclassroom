#include <stdio.h>

void ordonner_tableau(int tableau[], int taille_tableau);

void affiche(int tableau[], int taille_tableau);

int main(int argc, char *argv[])
{
	int tableau[4] = {14, 62, 3, 24};

	affiche(tableau, 4);

	ordonner_tableau(tableau, 4);
	
	affiche(tableau, 4);

	return 0;
}

void ordonner_tableau(int tableau[], int taille_tableau)
{
	int i, j, temp;
	temp = 0;

	for(i = 0; i < taille_tableau; i++)
	{
		for(j = i + 1; j < taille_tableau; j++)
		{
			if(tableau[j] < tableau[i])
			{
				temp = tableau[j];
				tableau[j] = tableau[i];
				tableau[i] = temp;
			}
		}
	}	
}

void affiche(int tableau[], int taille_tableau)
{
	int i;
	i = 0;

	for(i = 0; i < taille_tableau; i ++)
	{
		printf("%d\n", tableau[i]);
	}
}
