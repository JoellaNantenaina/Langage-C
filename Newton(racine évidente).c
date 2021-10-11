#include <stdio.h>
#include <math.h>

//Fonction qui demande à l'utilisateur de saisi les nombres a,b et c
void entrerValeur(float *a, float *b , float *c)
{
	printf("entrer trois nombres a,b,c \n");
	scanf("%f %f %f \n", a, b, c);
}

//La fonction qui calcule le delda
float calculDelta(float a,float b,float c)
{
	float delta;
	delta=b*b - 4.0*a*c;
	return delta;
}

//La fonction qui calcule les racines
void racines(float a,float b,float delta)
{
	float rac1,rac2;
	float reel, imaginaire;
	if(delta < 0)
	{
		printf("On a des solutions imaginaires\n");
		reel = -b/(2.0*a);
		imaginaire= sqrt(abs(delta))/(2.0*a);
		printf("rac1=%f + i %f\n",reel,imaginaire);
		printf("rac2=%f - i %f\n",reel,imaginaire);
	}
	else if(delta==0)
	{
		printf("On a une seule racine\n");
		rac1=-b/(2.0*a);
		rac2=rac1;
		printf("rac1=%f\n",rac1);
		
	}
	else if(delta>0)
	{
		printf("On a deux racines reelles distinctes\n");
		rac1=(-b+sqrt(delta))/(2.0*a);
		rac2=(-b-sqrt(delta))/(2.0*a);
		printf("rac1=%f\n",rac1);
		printf("rac2=%f\n",rac2);
		
	}
}

//Fonction principale
int main(int argc, char const *argv[])
{
	float a,b,c;
	float D;
	entrerValeur(&a,&b,&c);
	D=calculDelta(a,b,c);
	racines(a,b,D);
	return 0;
}
