#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void viderBuffer()
{
	int c = 0;
	while( c!= '\n' && c != EOF)
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

long lire_long()
{
        char nombreTexte[100] = {0};

        if(lire(nombreTexte, 100))
        {
                //si lecture du texte ok, convertir le nombre ne long et le retourner
                return strtol(nombreTexte, NULL, 10);
        }
        else
        {
                //si pb de lecture, revoyer 0
                return 0;
        }
}

int main(int argc, char *argv[])
{
	long age = 0;

	printf("Quel est votre age?");
	age = lire_long();
	printf("Ah vous avez %ld ans\n", age);

	return 0;
}
