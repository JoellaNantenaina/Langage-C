#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A[100],B[50],N,M,*PA, *PB;
	printf("Dimension du tableau A (max 50):");
	scanf("%d",&N);
	for(PA=A;PA<A+N;PA++)
	{
		printf("A[%d] = ", PA-A);
		scanf("%d",PA);
	}
	printf("Dimension du tableau B (max 50):");
	scanf("%d",&M);
	for(PB=B;PB<B+M;PB++)
	{
		printf("B[%d] = ", PB-B);
		scanf("%d",PB);
	}
	/*Affichage des tableaux*/
	printf("Tableau donne A :\n");
	for(PA=A;PA<A+N;PA++)
	{
		printf(" A[%d] = %d ",PA-A,* PA);
	}
	printf("\n");
	printf("Tableau donne B :\n");
	for(PB=B;PB<B+M;PB++)
	{
		printf("B[%d] = %d ",PB-B,* PB);
	}
	printf("\n");
	/*Copie B à la fin de A*/
	for(PA=A+N,PB=B; PB<B+M ; PA++,PB++)
		*PA=*PB;
	/*Nouvelle dimension*/
	N+=M;
	/*Edition du resultat*/
	printf("Tableau resultat A :\n");
	printf("Tableau donne A :\n");
	for(PA=A;PA<A+N;PA++)
	{
		printf(" A[%d] = %d ",PA-A,* PA);
	}
	printf("\n");
	return 0;
}