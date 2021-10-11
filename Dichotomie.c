#include <stdio.h>
#include <math.h>

//Les fontions
float fonction (float X);
float entrerVal();
void dichotomie ( float *x ,float *y ,float E);
void affiche (float x , float y);

//Fonction principale
int main(int argc, char const *argv[])
{
	float borInf,borSup,eps; //Epsilon
	borInf = entrerVal();
	borSup = entrerVal();
	dichotomie(&borInf , &borSup , eps);
	affiche ( borInf , borSup);
	return 0;
}

float entrerVal()
{
	float y;
	printf("entrer le domaine de definition de la fonction :\n");
	scanf("%f\n",&y);
	return y;
}

void dichotomie( float * x , float *y ,float E)
{
	float a,b,c;
	printf("entrer la valeur de l'epsilon:");
	scanf("%f\n",&E);
	while(fabs (*x -*y)>E)
	{
		float m=(*x + *y)/2;
		a=fonction (*x);
		b=fonction(*y);
		c=fonction(m);
		if(c*b<0)
		{
			*y=m;
		}
		else
		{
			*x=m;
		}
	}
}

float fonction (float X)
{
	float F = pow(X,3)+pow (X,2)-X+1;
	return F;
}

void affiche (float x , float y)
{
	printf("La solution de la fonction se trouve sur l'intervalle de [%f , %f ]", x,y);
}