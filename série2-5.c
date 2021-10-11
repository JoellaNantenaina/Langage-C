//SUJET
/*Ecrire un programme qui range les éléments d'un tableau A du type int dans
l'ordre inverse. Le programme utilisera des pointeurs P1 et P2 et une variable
AIDE pour la permutation des éléments.*/

//SOLUTION
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, A[5]={1,2,3,4},N,*P1=NULL,*P2=NULL,AIDE;
	printf("AVANT\n");
	for(i=0;i<5;i++)
		printf("A[%d]=%d\n",i,A[i]);
	for(P1=5;P1>=0;P1--)
	{
		for(*P2=0;P2<P1-1;P2++)
		{
			AIDE=A[P2];
			A[P2]=A[P2+1];
			A[P2+1]=AIDE;
		}
	}
	printf("APRES\n");
	for(i=0;i<5;i++)
		printf("A[%d]=%d\n",i,A[i]);
	
	return 0;
}
