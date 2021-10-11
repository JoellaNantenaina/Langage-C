#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int i,n,S=1;
	do{
		printf("Entrer une chiffre ");
		scanf("%d\n",&n);
	}while(n>=10 || n<0);
	
	
	printf("Voici votre table\n");
	for(i=0;i<10;i++)
	{
		S = i * n ;
		printf(" %d * %d = %d\n",n,i,S);
	}
	return 0;
}