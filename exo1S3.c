#include <stdio.h>
#include <stdlib.h>
int *creerTableau(int *tab,int taille);
void afficheTableau(int *tab,int taille);
void fonctionMystere(int *tab,int taille);
int main(int argc, char const *argv[])
{
	int N,*T;
	printf("entrer la taille du tableau\nN = ");
	scanf("%d\n",&N);
	T=malloc(N*sizeof(int));
	printf("Entrer les elements du tableau :\n");
	T=creerTableau(T,N);
	printf("Voici votre tableau :\n");
	afficheTableau(T,N);
	fonctionMystere(T,N);
	printf("\n\n");
	printf("Tableau\n");
	afficheTableau(T,N);
	free(T);
	return 0;
}
int *creerTableau(int *tab,int taille)
{
	for(int i=1;i<=taille;i++)
	{
		printf("tab[%d] = ",i);
		scanf("%d\n",&tab[i]);
	}
	return tab ;
}
void afficheTableau(int *tab,int taille)
{
	for(int i=1;i<=taille;i++)
	{
		printf("tab[%d]=%d   ",i,tab[i]);
	}
}
void fonctionMystere(int *tab,int taille)
{
	int i,j=taille,tamp=0;
	for(i=1;i<taille;i++)
	{
		for(j=taille;j>=i;j--)
		{
			if(tab[i]>tab[j])
			{
				tamp=tab[j];
				tab[j]=tab[i];
				tab[i]=tamp;
			}
		}
	}
}