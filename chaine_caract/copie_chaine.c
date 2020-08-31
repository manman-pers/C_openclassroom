#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{

	/*
	 * * On cree une chaine "chaine" qui contient un peu de texte et une chaine "copie" (vide) de taille 100 pour etre sur d'avoir de la place pour la copie
	 */

	char chaine[]= "texte", copie[100] = {0};

	strcpy(copie, chaine); /*on copie la chaine dans copie*/

	printf("chaine vaut %s\n", chaine);
	printf("copie vaut %s\n", copie);
	
	return 0;
}
