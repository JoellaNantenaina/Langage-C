/*Ecrire une fonction qui compter le nombre d'occurences 
d'un élément dans un tableau et la tester*/
#include <stdio.h>
#define taille_max 20
void contenuTab (int T[],int tailleTab);
void afficheTab (int T[],int tailleTab);
void nbOccur (int T[],int tailleTab);
int main(int argc, char const *argv[])
{
	int T[taille_max],tailleTab;
	printf("Entrer la taille du tableau\ntailleTab=");
	scanf("%d\n",&tailleTab);
	printf("Ecrire le contenu de votre tableau\n");
	contenuTab(T,tailleTab);
	printf("Votre tableau\n");
	afficheTab(T,tailleTab);
	nbOccur(T,tailleTab);
	return 0;
}
void contenuTab (int T[],int tailleTab)
{
	int i;
	for(i=0;i<tailleTab;i++)
	{
		printf("T[%d]=",i);
		scanf("%d\n",&T[i]);
	}
}
void afficheTab (int T[],int tailleTab)
{
	int i;
	for(i=0;i<tailleTab;i++)
	{
		printf("T[%d]=%d\n",i,T[i]);
	}
}
void nbOccur (int T[],int tailleTab)
{
	int i,nbOcc,cptNbOcc=0;
	printf("Entrer le nombre que vous voulez compter son occurences\nNbOcc=");
	scanf("%d\n",&nbOcc);
	for(i=0;i<tailleTab;i++)
	{
		if(nbOcc==T[i])
		{
			cptNbOcc++;
		}
	}
	printf("Le nombre %d compte %d\n",nbOcc,cptNbOcc);
}