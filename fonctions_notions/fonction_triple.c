#include <stdlib.h>
#include <stdio.h>

int triple(int nombre)
{
	return 3 * nombre;
}

int main(int argc, char *argv[])
{
	int nombreEntre = 0;// nombreTriple =0;//

	printf("Entrez un nombre\n");
	scanf("%d", &nombreEntre);

	//nombreTriple = triple(nombreEntre);//

	printf("Le resultat est %d\n", triple(nombreEntre)); //nombreTriple);
	
	return 0;
}
