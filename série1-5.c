/*Ecrire en C la fonction factorille et la tester.
Ecrire les versions itératives avec bouc for et while
ainsi qu'une version récursive.
Pour les versions itératives, donner la complixité des algorithmes proposé*/
#include <stdio.h>
int Fonctionfactorielle (int N);
int factorielle(int N);
int main(int argc, char const *argv[])
 {
 	int N,D;
 	printf("Saisir un nombre strictement positive\nN=");
 	scanf("%d\n",&N);
 	Fonctionfactorielle(N);
 	D=factorielle(N);
 	printf("%d!=%d\n",N,D);
 	return 0;
 }

 int Fonctionfactorielle (int N) 
 {
 	int fact=1,i=1;
 	//Vérsions itératives
 	for(i=1;i<=N;i++)
 	{
 		fact*=i;
 	}
 	printf("La factorielle de %d est %d\n",N,fact);
 	while (i<=N)
 	{
 		fact*=i;
 		i++;
 	}
 	printf("La factorielle de %d est %d\n",N,fact);

 	
 	return fact;
 }
 //Version récursive
 int factorielle (int N)	
 {
 	if(N>0)
 	{
 		return N * Fonctionfactorielle(N-1);
 	}
 	else 
 	{
 		return 1;
 	}
 }
 	