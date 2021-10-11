//SUJET
/*Un tableau A de dimension N+1 contient N valeurs entières triées par 
ordre croissant; la (N+1)ième valeur est indéfinie.
Insérer une valeur VAL donnée au clavier dans le tableau A
de manière à obtenir un tableau de N+1 valeurs triées.*/

//REPONSE
#include <stdio.h>
#include <stdlib.h>
int *remplirA(int *A,int N);
void afficheA (int *A, int N);
int *tri (int *A,int N);
void ajout_VAL_dans_A(int *A,int N);
int main(int argc, char const *argv[])
{
	int N,i,*A,VAL;
	printf("Entrer la taille du tableau:");
	scanf("%d\n",&N);
	A=malloc(N*sizeof(int));
	printf("Remplissez votre tableau!\n");
	A=remplirA(A,N);
	//Initialison la valeur de A[N+1] = 0
	A[N+1]=0;
	printf("Voici le tableau A dans ordre croissant\n");
	A=tri(A,N);
	afficheA(A,N);
	//Insertion d'une valeur VAL par l'utilisateur;
	printf("Enter une valeur\nVAL=A[%d]=",N);
	scanf("%d\n",&VAL);
	A[N]=VAL;
	printf("Affichage du tableau A apres l'ajout de VAL:\n");
	afficheA(A,N);
	A=tri(A,N);
	printf("Voici le tableau de N+1 valeurs triees\n");
	afficheA(A,N);
	return 0;
}
//Creation du tableau A de N+1 dimensions;
int *remplirA(int *A,int N)
{
	for(int i=0;i<N+1;i++)
	{
		printf("A[%d]=",i);
		scanf("%d\n",&A[i]);
	}
	return A;
}
//Affichage du tableau A de N+1 dimensions;
void afficheA (int *A, int N)
{
	for(int i=0;i<N+1;i++)
	{
		printf("A[%d]=%d\n",i,A[i]);
	}
}
/*Fonction sur le triage et l'affichage de
 N valeurs entiers triées par ordre croissant;*/
int *tri (int *A,int N)
{
	int i,j,tamp=0;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N+1;j++)
		{
			if(A[i]>A[j])
			{
				tamp=A[j];
				A[j]=A[i];
				A[i]=tamp;
			}
		}
	}
	return A;
}