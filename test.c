#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n,i,*tab;
	printf("n=");
	scanf("%d\n",&n);
	tab=malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{

		printf("tab[%d]=",i);
		scanf("%d\n",&tab[i]);
		
	}
	printf("Avez-vous rempli les condition?\n");
	for(i=0;i<n;i++)
	{
		if(tab[i+1]==tab[i])
		{
			printf("On peut arreter le programme\n");
			break;
		}
	
		else
		{
			printf("tab[%d]=%d\n",i,tab[i]);
		}
	}
	return 0;
}