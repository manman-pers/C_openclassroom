#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "dico.h"

int take_word(char *word_taken)
{
	FILE* dico = NULL; /* le pointeur de fichier qui va contenir notre fichier */
	int nb_words = 0;
	int nb_choosen_word = 0;
	int i = 0;
	int read_caracter = 0;

	dico = fopen("dico.txt", "r"); /* On ouvre le dico en lectuere seule */
	
	/* On verifie si on a reussi a ouvrir le dictionnaire */
	if(dico == NULL) /* Si on a pas reussi a ouvrir le fichier */
	{
		printf("Impossible de charger le dictionnaire de mots");
		
		return 0; /* On retourne 0 pour indiquer que la fonction a echoue */

		/* A la lecture du return, la fonction s'arrete immediatement */
	}

	do
	{
		read_caracter = fgetc(dico);
		if(read_caracter == '\n')
			nb_words++;
	}while(read_caracter != EOF); /* EOF = end of file */
	
	nb_choosen_word = random_nb(nb_words); /* On pioche un mot au hasard */

	/* On recommence a lire le fichier depuis le debut, on s'arrete lorsqu'on est arrive au bon mot */
	rewind(dico);
	while(nb_choosen_word > 0)
	{
		read_caracter = fgetc(dico);
		if(read_caracter == 'n')
			nb_choosen_word--;
	}

	/* Le curseur du fichier est positionne au bon endroit 
	 * * On a plus qu'a faire un fgets qui ;ire la ligne
	 */

	fgets(word_taken, 100, dico);
	/* On enleve le \n a la fin */
	word_taken[strlen(word_taken) - 1] = '\0';
	
	fclose(dico);

	return 1; /* tout s'est bien passe on retourne 1 */
}

int random_nb(int max_nb)
{
	srand(time(NULL));
	return (rand() % max_nb);
}
