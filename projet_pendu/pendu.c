#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "dico.h" 

char read_caracter();

int search_letter(char letter, char secret_word[], int letter_found[]);

int win(int letter_found[], long size_word);

int main()
{
	char letter = 0; /*Letter entered by the user */
	char secret_word[100] = {0}; /* word to find */
	int *letter_found = NULL; /* Boolean tab, each case matches with a letter of the secret word. 0 = letter not found 1 = letter found */
	int i;
	int count; 
	long size_word = 0;

	count = 10; /* Number of try for the user */
	i = 0;

	printf("Bienvenue dans le jeu du pendu\nVous avec 10 essais\n");

	if(!take_word(secret_word))
	{
		exit(0);
	}
	
	size_word = strlen(secret_word);

	letter_found = malloc(size_word * sizeof(int)); /* On alloue dynamiqument le taleau letter_found , on ne connaissait pas sa taille au depart */

	if(letter_found == NULL)
	exit(0);

	while( count > 0 && !win(letter_found, size_word))
	{
		printf("\n\nIl vous reste %d coups restants", count);
		printf("\n Quel est le mot secret?");

		/* We print the secret word by hidding the missing letter */

		for( i = 0; i < size_word; i++)
		{
			if(letter_found[i])
				printf("%c", secret_word[i]);
			else
				printf("*");
		}

		printf("\nProposez une lettre : ");
		letter = read_caracter();

		if(!search_letter(letter, secret_word, letter_found))
		{
			count --;
		}
	}

	if(win(letter_found, size_word))
		printf("\n\nBravo! le mot secret etait bien : %s\n", secret_word);
	else
		printf("\n\nPerdu! Le mot secret etait : %s\n", secret_word);


	free(letter_found);

	return 0;
}

int search_letter(char letter, char secret_word[], int letter_found[])
{
	long i = 0;
	int good_letter = 0;

	/* We go through secret_word to see if there is the letter entered by the user */
	for( i = 0; secret_word[i] != '\0'; i ++)
	{
		if(letter == secret_word[i])
		{
			good_letter = 1;
			letter_found[i] = 1;
		}
	}
	return good_letter;
}

int win(int letter_found[], long size_word)
{
	long i = 0;
	int player_win = 1;

	for( i = 0; i < size_word; i ++)
	{
		if(letter_found[i] == 0)
			player_win = 0;
	}

	return player_win;
}

char read_caracter()
{
	char caracter = 0;
	caracter = getchar(); /* We read the first caracter */
	caracter =  toupper(caracter); /* We put the letter in caps if not already */

	/* we read memorised caracter one by one to \n , to errase them */
	while(getchar() != '\n');

	return caracter; /* we return the 1st caracter read */
}
