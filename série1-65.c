/*En déduire une fonction qui teste si deux tableaux d'entiers
 contiennent les même éléments, sans tenir compter de l'ordre
 dans lequel les éléments sont rangés.
 Tester cette fonction.*/
#include <stdio.h>
#define Taille_max_tab 10
void contenuTableaux(int T1[],int tailleTab);
void affficheTableaux(int T1[],int tailleTab);
void test(int T1[],int T2[],int tailleTab);
int main(int argc, char const *argv[])
{
	int tailleTab,T1[Taille_max_tab],T2[Taille_max_tab];
	printf("Entrer la taille du tableau:");
	scanf("%d\n",&tailleTab);
	contenuTableaux(T1,tailleTab);
	contenuTableaux(T2,tailleTab);
	affficheTableaux(T1,tailleTab);
	affficheTableaux(T2,tailleTab);
	test(T1,T2,tailleTab);
	return 0;
}
void contenuTableaux(int T1[],int tailleTab)
{
	int i,j;
	printf("Creation du tableau 1:\n");
	for(i=0;i<tailleTab;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(T1[i]==T1[j])
			{
				break;
			}
			else
			{
				printf("T1[%d]=",i);
				scanf("%d\n",&T1[i]);
			}
		}
		
	}
	printf("Creation du tableau 2:\n");
	for(j=0;j<tailleTab;j++)
	{
		printf("T2[%d]=",j);
		scanf("%d\n",&T2[j]);
	}
}
void affficheTableaux(int T1[],int tailleTab)
{
	int i,j;
	printf("Voici le tableau 1\n");
	for(i=0;i<tailleTab;i++)
	{
		printf("T1[%d]=%d\n",i,T1[i]);
	}
	printf("Voici le tableau 2\n");
	for(j=0;j<tailleTab;j++)
	{
		printf("T2[%d]=%d\n",j,T2[j]);
	}
}
void test(int T1[],int T2[],int tailleTab)
{
	int i,j,cpt=0;
	//Testons T1 et T2 s'ils sont egaux ou pas	
	for(i=0;i<tailleTab;++i)
	{
		for(j=0;j<tailleTab;++j)
		{
			{
				if(T1[i]==T2[j])
					{
						printf("T1[%d]=T2[%d]\n",i,j);
						cpt++;
					}
			}
		}
	}
	if(cpt==tailleTab)
	{
		printf("Les deux tableaux sont egaux\n");
	}
	else
	{
		printf("Les deux tableaux sont differentes\n");
	}
}