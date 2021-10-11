#include <stdio.h>
#include <stdlib.h>
void  entrerDimTab( int *taille);
int  *alocationTab(int *taille);
int  *creerTab(int *taille);
int  sommeTab(int *taille,int *tab);
long  prodTab(int *tab , int *taille);
double moyenneTab(int S , int *taille);
int main(int argc, char const *argv[])
{
	int N=0;
	int *tab;
	int S=0;
	long P=1;
	double M;
	entrerDimTab(&N);
	printf("la taille de votre tableau est %d\n",N);
	tab = alocationTab(&N);
	printf("Creation du tableau de taille %d\n",N);
	tab = creerTab(&N);
	S=sommeTab(&N , tab);
	P=prodTab(tab,&N);
	M=moyenneTab(S,&N);
	return 0;
}
void  entrerDimTab( int *taille)
{
	do{
		printf("entrer la taille du tableau (max 15): ");
		scanf("%d\n",taille);
	}while(*taille < 1 || *taille > 15);
}
int *alocationTab(int *taille)
{
	int *A;
	A=malloc(*taille * sizeof(int));
	return A;
}
int  *creerTab(int *taille)
{
	int *tab;
	for( int i=0;i<*taille;i++)
	{
		printf("tab[%d] = ",i);
		scanf("%d\n",&tab[i]);
	}
	return tab;
}
int sommeTab(int *taille, int *tab)
{
	int S=0;
	for(int i=0 ; i<*taille; i++)
	{
		S+=tab[i];
	}
	printf("La somme des elements dans le tableau est %d\n",S);
	return S ;

}
long  prodTab(int *tab , int *taille)
{
	long P=1;
	for(int i=0; i<*taille ;i++)
	{
		P*=*(tab+i);
	}
	printf("Le produit des elements dans le tableau est %ld\n",P);
	return P;
}
double moyenneTab(int S , int *taille)
{
	double M;
	for(int i; i<*taille; i++)
	{
		M=S / *taille;
	}
	printf("La moyenne des elements dans le tableau est %.5f\n",M);
	return M;
}