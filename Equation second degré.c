#include<stdio.h>
#include<math.h>

//Les foctions
void demval(float *,float *,float *);
float newton(float a,float b ,float eps);
float fonc(float X);
float foncpr(float X);
void affiche(float X,int n);

//Fonction principale
int main (void)

{
    float a,b, E , X1;
    int N;
    demval(&a,&b,&E);
    X1 = fonc(a);
    X1 = newton(a,b,E);
    affiche(X1,N);
    return 0;
}

//Fonction qui demande la valeur de la borne Inf ,la borne Sup et l'epsilon
void demval(float *a,float *b,float *epsilon)
{
    printf("entrer la borne inf\n a=");
    scanf("%f",a);
    printf("entrer la borne sup\n b=");
    scanf("%f",a);
    printf("entrer la valeur de precision\n epsilon=");
    scanf("%f",epsilon);
}

//Foction qui utilise le méthode de NEWTON
float newton(float a,float b , float eps)
{
    float Y0=(a+b)/2;
    float Y1;
    int cpt=0; 
    
    do
    {
        Y1 = Y0 - (fonc(Y0)/foncpr(Y0));
        Y0 = Y1;
        printf("%f\n",Y1);
        cpt++;
        printf("Le nombre d'iteration est %d\n",cpt);
    }while(fabs(Y0 - Y1)>eps );
    
    return Y1;
}

//Fonction qu'on entre notre fonction à étudier
float fonc(float X)
{
    float F = log(X)-(X*X)+2;//cos(X) - pow(X,3);
    return F;
}

//Derivée de la fonction
float foncpr(float X)
{
    float F = (1/X)-(2*X);//-sin(X) - 3*pow(X,2);
    return F;
}

//Affichage
void affiche(float X,int n)
{
    printf("On trouve la solution %f au %d-eme iteration", X,n);
}