#include <stdio.h>

int main(int argc, char *argv[])
{
	int tab[4], i;
	i = 0;

	tab[0] = 10;
	tab[1] = 40;
	tab[2] = 8;
	tab[3] = 12;

	for(i = 0; i < 4; i++)
	{
		printf("%d\n", tab[i]);
	}
	return 0;
}


