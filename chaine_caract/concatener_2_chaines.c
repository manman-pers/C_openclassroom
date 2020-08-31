#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char chaine1[100] = "Salut ", chaine2[] = "Manon Lecuyer";

	strcat(chaine1, chaine2);

	printf("Chaine1 vaut : %s\n", chaine1);
	printf("Chaine 2 vaut toujours : %s\n", chaine2);

	return 0;
}

