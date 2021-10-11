//SUJET
/*Ecrire un programme qui lit deux tableaux A et B et leurs dimensions N et M
au clavier et qui ajoute les éléments de B à la fin de A;
Utiliser le formalisme pointeur à chaque fois que cela est possible*/

//SOLUTION

//a)
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int i, N,M,*A,*B;
	A=malloc(N*sizeof(int));
	B=malloc(M*sizeof(int));
	printf("Entrer la dimension du tableau A :\n");
	scanf("%d\n",&M);
	printf("Saisir les valeurs dans le tableau A\n");
	for(i=0;i<N;i++)
	{
		printf("A[%d]=",i);
		scanf("%d\n",A+i);
	}
	printf("Entrer la dimension du tableau B :\n");
	scanf("%d\n",&M);
	printf("Saisir les valeurs dans le tableau B\n");
	for(i=0;i<M;i++)
	{
		printf("B[%d]=",i);
		scanf("%d\n",B+i);
	}
	//Affichage des tableaux
	printf("tableau A :\n");
	for(i=0;i<N;i++)
	{
		printf("A[%d]=%d\n",i,*(A+i));
	}
	printf("tableau B :\n");
	for(i=0;i<M;i++)
	{
		printf("B[%d]=%d\n",i,*(B+i));
	}
	//Copie B à la fin de A
	for(i=0;i<M;i++)
	{
		*(A+N+i)=*(B+i);
	}
	//Nouvelle dimension
	N+=M;
	//Edition du resultat
	printf("Voici le tabeau final\n");
	for(i=0;i<N;i++)
	{
		printf("A[%d]=%d\n",i,*(A+i));
	}
		return 0;
}


//b)En utililisant le formalisme pointeur  
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A[100],B[50],N,M,*PA, *PB;
	printf("Entrer la dimension du tableau A :\n");
	scanf("%d\n",&N);
	printf("Saisir les valeurs dans le tableau B\n");
	for(PA=A;PA<A+N;PA++)
	{
		printf("A[%d] = ", PA-A);
		scanf("%d\n",PA);
	}
	printf("Entrer la dimension du tableau B :\n");
	scanf("%d\n",&M);
	printf("Saisir les valeurs dans le tableau B\n");
	for(PB=B;PB<B+M;PB++)
	{
		printf("B[%d] = ", PB-B);
		scanf("%d\n",PB);
	}
	//Affichage des tableaux
	printf("Tableau A :\n");
	for(PA=A;PA<A+N;PA++)
	{
		printf(" A[%d] = %d \n",PA-A,* PA);
	}
	printf("\n");
	printf("Tableau B :\n");
	for(PB=B;PB<B+M;PB++)
	{
		printf("B[%d] = %d\n ",PB-B,* PB);
	}
	printf("\n");
	//Copie B à la fin de A
	for(PA=A+N,PB=B; PB<B+M ; PA++,PB++)
		*PA=*PB;
	//Nouvelle dimension
	N+=M;
	//Edition du resultat
	printf("Voici le tableau final de dimension %d:\n",N);
	for(PA=A;PA<A+N;PA++)
	{
		printf(" A[%d] = %d \n",PA-A,* PA);
	}
	printf("\n");
	return 0;
}