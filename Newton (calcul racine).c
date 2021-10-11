#include <stdio.h>
#include <math.h>

//Les fonctions
void saisi(float *,float *,int *);
float fonction( float x);
float deriverDeLaFonction(float x);
float Newton(float , int );
void affiche (float);

//La fonction principale
int main(int argc, char const *argv[])
{
	float a,b,r; // r:racine de l'equation */a:borne inf */ b:borne sup
	int n; //nb d'itération
	saisi (&a,&b,&n);
	r=Newton(a,n);
	affiche(r);
	return 0;
}

//Fonction qui demande les valeurs
void saisi(float *A,float *B,int *N)
{
	printf("entrer le borne inferieur\n");
	scanf("%f\n",A);
	printf("entrer alors le borne superieur\n");
	scanf("%f\n",B);
	printf("entrer  le nombre d'iteration\n");
	scanf("%d\n",N);
}

//Foction
float fonction(float x)
{
	float y;
	y=log(x)-(x*x)+2;
	return y;
}

//Derivée de la fonction
float deriverDeLaFonction(float x)
{
	float yprim;
	yprim=(1/x)-(2*x);
	return yprim;
}

//Méthode de NEWTON
float Newton(float U0,int N)
{
	float U;
	int i;
	U=U0;
	for(i=0;i<N;i++)
	{
		U=U-(fonction(U))/(deriverDeLaFonction(U));
	}
	return U;
}
void affiche(float y)
{
	printf("La racine est egal %f\n",y);
}