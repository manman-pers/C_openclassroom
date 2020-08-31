#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char chaine1[] = "Ceci est un Test", chaine2[] = "Ceci est un test";

	if(strcmp(chaine1, chaine2) == 0)
	{
		printf("les chaines sont identiques\n");
	}

	else
	{
		printf("Les chaines sont differentes\n");
	}

	return 0;
}
