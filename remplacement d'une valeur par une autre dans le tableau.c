#include <stdio.h>
//Fonction principale
int main(int argc, char const *argv[])
{
	//Déclaratin des variables
	int i,taille,pos,VAL;
	int A[taille],temp[taille+1];
	//Demande de la taille du tableau
	printf("taille=");
	scanf("%d\n",&taille);
	//Création du tableau
	for(i=0;i<taille;i++)
	{
		printf("A[%d]=",i);
		scanf("%d\n",&A[i]);
	}
	//Affichage du tableau avant
	printf("Tableau avant\n");
	for(i=0;i<taille;i++)
	{
		printf("A[%d]=%d\n",i,A[i]);
	}
	//Demande de la valeur qu'on peut remplacer
	printf("VAL=");
	scanf("%d\n",&VAL);
	//Demande de la valeur de la position qu'on peut mettre VAL
	printf("Entrer la position que vous voulez changer par VAL\npos=");
	scanf("%d\n",&pos);
	pos=pos-1;
	for(i=0;i<taille;i++)
	{
		if(i<pos)
		{
			temp[i]=A[i];
		}
		if(i>pos)
		{
			temp[i]=A[i-1];
		}
		if(i==pos)
		{
			temp[i]=VAL;
		}
	}
	//Affichage du tableau après le remplacement de valeur
	printf("Votrer tableau \n");
	for(i=0;i<taille;i++)
	{
		printf("A[%d]=%d\n",i,temp[i]);
	}
	return 0;
}