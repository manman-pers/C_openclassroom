#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double strtod( const char *start, char **end);

void viderBuffer()
{
	int c = 0;
	while( c != '\n' && c != EOF)
	{
		c = getchar();
	}
}

int lire(char *chaine, int longueur)
{
	char *positionEntree = NULL;

	if(fgets(chaine, longueur, stdin) != NULL)
	{
		positionEntree = strchr(chaine, 'n');
		if(positionEntree != NULL)
		{
			*positionEntree = '\0';
		}
		else
		{
			viderBuffer();
		}
		return 1;
	}
	else
	{
		viderBuffer();
		return 0;
	}
}

double lire_double()
{
	char nombreTexte[100] = {0};

	if(lire(nombreTexte, 100))
	{
		return strtod(nombreTexte, NULL);
	}
	else
	{
		return 0;
	}
}

int main()
{
	double poids = 0;

	printf("combien pesez vous\n?");
	poids = lire_double();
	printf("Vous pesez %f kilos\n", poids);

	return 0;

}
