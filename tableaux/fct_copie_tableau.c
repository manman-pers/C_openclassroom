#include <stdio.h>

void copie(int tab_origin[], int tab_copy[], int taille_tableau);

void affiche(int tableau[], int taille_tableau);

int main(int argc, char *argv[])
{
	int tab_origin[4] = {4, 3, 2, 1};
	int tab_copy[100] = {0};
	
	
	copie(tab_origin, tab_copy, 4);

	affiche(tab_copy, 4);

	return 0;
}

void copie(int tab_origin[],int tab_copy[], int taille_tableau)
{
	int i;

	for(i=0; i < taille_tableau; i++)
	{
		tab_copy[i] = tab_origin[i];
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

