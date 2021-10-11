//SUJET
/*Ecrire un programme qui determine la plus grande et la plus petite 
valeur dans un tableau d'entiers A.
Afficher ensuite la valeur et la position du maximum et du minimum.
Si le tableau contient plusieurs maxima ou minima,le programme retiendra 
la position du premier maximum ou minimum rencontré.*/

//REPONSE
#include <stdio.h>
#include <stdlib.h>
//PROTOTYPE
void afficheA(int *A,int N);
void max_et_min (int *A,int N);
int main(int argc, char const *argv[])
{
	int i,N,*A;
	//N: taille du tableau
	printf("N=");
	scanf("%d\n",&N);
	A=malloc(N*sizeof(int));
	printf("Ecrire la valeur que vous souhaitez (taille du tableau):\n");
	for(i=0;i<N;i++)
	{
		printf("A[%d]=",i);
		scanf("%d\n",&A[i]);
	}
	printf("\n");
	printf("Voici le tableau\n");
	afficheA(A,N);
	printf("\n");
	max_et_min(A,N);
	return 0;
}
void afficheA(int *A,int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("A[%d]=%d\n",i,A[i]);
	}
}
void max_et_min (int *A,int N)
{
	int i=0,max=A[i],min=A[i],posmax=i,posmin=i;
	for(i=0;i<N;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
			posmax=i;
		}
		else if(A[i]<min)
		{
			min=A[i];
			posmin=i;
		}
	}
	printf("La valeur maximum dans ce tableau est %d\nElle est dans %d-eme position\n\n",max,posmax);
	printf("La valeur minimum dans ce tableau est %d\nElle est dans %d-eme position\n\n",min,posmin);

}