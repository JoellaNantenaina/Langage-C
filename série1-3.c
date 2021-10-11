/* SUJET
Ecrire un programme qui calcule la longueur L
d'une câble entre deux pylônes,grâce à la formule:

L=a[1+(2/3)*((2*f)/a)*((2*f)/a)]
Où a est la distance entre les pylônes
   f la flèche mesuré perpendiculairement au milieu du câble
Ces deux paramètre seront donnés par l'utilisateur */
//REPONSE
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float a,f,L=1;
	printf("Entrer la distance entre les pylones\n a=");
	scanf("%f\n",&a);
	printf("Entrer la fleche mesure perpendiculairement au milieu du cable\n f=");
	scanf("%f\n",&f);
	L=(a*(1+((2/3)*pow(((2*f)/a),2))));
	printf("La longueur d'une cable entre deux pylones est %f\n",L);

	return 0;
}