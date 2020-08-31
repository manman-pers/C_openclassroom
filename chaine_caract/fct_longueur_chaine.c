#include <stdio.h>

int longueur_chaine(const char* chaine);

int main(int argc, char *argv[])
{
	char chaine[] = "Carrement";
	int longueur = 0;
	
	longueur = longueur_chaine(chaine);

	printf("La chaine %s, fait %d caractere\n", chaine, longueur);

	return 0;
}

int longueur_chaine(const char* chaine)
{
	int nb_de_caractere = 0;
	char caractere_actuel = 0;

	do
	{
		caractere_actuel = chaine[nb_de_caractere];
		nb_de_caractere++;
	}while(caractere_actuel != 0);

	nb_de_caractere--;

	return nb_de_caractere;
}
