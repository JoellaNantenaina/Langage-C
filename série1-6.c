/*Ecrire une fonction qui affiche les élements d'un tableau d' entiers,
ainsi que leurs indices et la tester.
Donner la complexité de l'algorithme correspondant*/
#include <stdio.h>
void tableau (int T[],int n);
void afficheTableau (int T[],int n);
int main(int argc, char const *argv[])
{
	int T[50],n,i;
	printf("Entrer la taille de votre tableau:\n");
	scanf("%d\n",&n);
	tableau(T,n);
	afficheTableau(T,n);
	
	return 0;
}
void tableau (int T[],int n)
{
	int i=0;
	printf("Ecrire les elements de votre tableau\n");
	for(i=0;i<n;i++)
	{
		printf("T[%d]=",i);
		scanf("%d\n",&T[i]);
	}

	
}
void afficheTableau (int T[],int n)
{
	int i;
	printf ("Voici votre tableau contient des nombres entiers de taille %d\n",n);
	for(i=0;i<n;i++)
	{
		printf("T[%d]=%d\n",i,T[i]);
	}
}
