/*SUJET
Ecrire une procédure qui affiche les nombres entiers de 1 à N,
puis la somme de ces nombres ,N étant donnée par l'utilisateur .
Modifier le programme pour calculer la factorielle .
Calculer la factorielle de 100. */
//REPONSE
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int N, i;
	printf("Saisir N svp\n");
	scanf("%d\n",&N);
	//Affichage des nombres entiers de 1 à N
	for(i=1;i<=N;i++)
	{
		printf(" %d ",i);
	}
	printf("\n");
	//Modification du programme et on calcule la factorielle de N
	int fact=1;
	for (int i=1;i<=N;i++)
	{
		fact*=i;
	}
	printf("La factoeielle de N=%d egal a %d\n",N,fact);
	//Calcul de la factorielle de 100
	int long Fact100=1;
	for (int i=1;i<=100;i++)
	{
		Fact100*=i;
	}
	printf("La factorielle de 100 est %ld\n",Fact100);
	return 0;
}