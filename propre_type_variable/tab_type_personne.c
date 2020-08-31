#include <stdio.h>

int	main(int argc, char *argv[])
{
	struct people
	{
		char f_name[100];
		char l_name[100];
		char address[1000];
		int age;
	};
	
	struct people people[2];
	int i;

	for( i = 0; i < 2; i++)
	{
		printf("Quel est votre prenom?\n");
		scanf("%s", people[i].f_name);
		printf("Quel est votre nom?\n");
		scanf("%s", people[i].l_name);
		printf("Quel est votre adresse?\n");
		scanf("%s", people[i].address);
		printf("Quel age avez-vous?\n");
		scanf("%d", &people[i].age);
	}

	puts("Infos des personnes\n");
	printf("Prenom\tNom\tAdresse\t\t\tAge\n");

	for( i = 0; i < 2; i++)
	{
		printf("%s\t%s\t%s\t\t%d\n", people[i].f_name, people[i].l_name, people[i].address, people[i].age);
	}

	return (0);
}
