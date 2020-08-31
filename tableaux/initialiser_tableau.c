#include <stdio.h>

int main(int argc, char *argv[])
{
	int tab[4], i;
	i = 0;

	//initialiser le tableau a 0//
	for(i = 0; i < 4; i++)
	{
		tab[i] = 0;
	}

	//Affiche les valeurs du tableau//
	for(i = 0; i < 4; i++)
	{
		printf("%d\n", tab[i]);
	}
	return 0;
}
