#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void viderBuffer()
{
	int c = 0;
	while(c != '\n' && c != EOF)
	{
		c = getchar();
	}
}

int lire(char *chaine, int longueur)
{
	char *position_entree = NULL;

	// On lit le texte saisie au clavier
	if(fgets(chaine, longueur, stdin) != NULL) //Pas d'erreur de saisie?
	{
		position_entree = strchr(chaine, '\n'); // on recherche le retour a la ligne
		if(position_entree != NULL) // si on a trouve le retour a la ligne
		{
			*position_entree = '\0'; //On remplace le caractere par entree
		}
		else
		{
			viderBuffer();
		}
		return 1; // On renvoie 1 si la fonction s'est deroule sans erreurs
	}
	else
	{
		viderBuffer();
		return 0; // On renvoie 0 s'il ya eu une erreur
	}
}

int main(int argc, char *argv[])
{
	char nom[10];

	printf("Quel est votre nom?\n");
	lire(nom, 10);
	printf("Vous vous appelez %s\n", nom);

	return 0;
}
