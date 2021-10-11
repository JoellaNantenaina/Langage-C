/* SUJET
Ecrire un programme demandant à l'utilisateur d'entre son prénom,son âge,
et qui affiche ensuite à l'écran le prenom,l'âge et le nombre de jours vécus.*/
//REPONSE
#include <stdio.h>
//Foction principale
int main(int argc, char const *argv[])
{
	char prenom;
	int P,age,nbjvecu,i,S=0,cptbis=0,A;
	// S : somme des annees bisextiels 
	// cptbis: Pour compter le nombre des annees bisextiles
	// A: annee de naissance
	printf("Entrer ton age:\n");
	scanf("%d\n",&age);
	printf("Vous etes en quelle annee maintenant\n");
	scanf("%d\n",&P);
	A = P - age;
	printf("Donc, tu es nee vers %d , ne c'est pas?\n",A);
	for(i=A;i<=P;i++)
	{
		if(i%4==0)
		{
			cptbis++;
		}
	}
	S+=cptbis;
	printf("Vos annees bisextiles des que tu es nee jusqu'a maintenant comptent %d\n",S);
	nbjvecu=(age*365)+S;
	printf("Les nombres de jours vecus comptent %d\n ",nbjvecu);
	return 0;
}

