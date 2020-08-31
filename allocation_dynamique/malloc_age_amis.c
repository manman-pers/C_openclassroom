#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[])
{
	int nb_amis = 0;
	int i;
	i = 0;
	int* age_amis = NULL; /* Ce pointeur va servir de tableau apres l'appel de malloc */

	/* On demande le nombre d'amis a l'utilisateur */
	printf("Combien d'amis avez-vous?\n");
	scanf("%d", &nb_amis);

	if( nb_amis > 0 ) /* Il faut qu'il ait au moins un ami */
	{
		age_amis = malloc(nb_amis * sizeof(int)); /* on alloue de la memoire pour le tableau */
		if(age_amis == NULL) /* On verifie si l'allocation a marche ou non */
		{
			exit(0); /*On arrete tout */
		}

	/* On demande l'age des amis un a un */
	for( i = 0; i < nb_amis; i++)
	{
		printf("Quel age a l'ami numero %d?\n", i + 1);
		scanf("%d",&age_amis[i]);
	}

	/* On affiche les ages stockes un a un */
	printf("Vos amis ont les ages suivant\n");
	for( i = 0; i < nb_amis; i++)
	{
		printf("L'ami numero %d a %d ans\n", i + 1, age_amis[i]);
	}

	/* On libere la memoire alloue avec malloc, on en a plus besoin */

	free(age_amis);
	}

	return 0;
}

