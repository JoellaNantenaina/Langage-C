#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* remplirTab(int *tab,int n);
void afficheTab(int *tab,int n);
int* triTab(int *tab,int n);
int main()
{
	int taille,*tab;
	int val;
	//Demander la taille du tableau à l'utilisateur
	printf("Entrer la taille du tableau : \n");
	scanf("%d",&taille);
	//Creation du tableau en mode dynamique
	tab=malloc(taille*sizeof(int));
	//Demander à l'utilisateur de remplir le tableau
	tab=remplirTab(tab,taille);
	//Initialison la valeur de tab[taille] = 0
	//tab[taille-1]=0;	
	//Trions le tableau par ordre croissante
	tab=triTab(tab,taille);
	//Affichage du tableau trié
	afficheTab(tab,taille);
	//Changement de la valeur de tab[n] = val
	printf("Entrer la valeur du tab[%d]\n",taille-1);
	scanf("%d",&val);
	tab[taille-1]=val;
	printf("affichage après le Changement de valeur de tab[%d] \n",taille-1);
	afficheTab(tab,taille);
	//Trier le tableau une nouvelle fois
	printf("Trier le tableau une second fois => on a :\n");
	tab=triTab(tab,taille);
	//Affichage du tableau trié 
	afficheTab(tab,taille);
	return 0;
}
int* remplirTab(int *tab,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("tab[%d] = \n",i );
		scanf("%d",&tab[i]);
	}
	return tab;
}

int* triTab(int *tab,int n)
{
	int temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(tab[i]>tab[j])
			{
				temp=tab[j];
				tab[j]=tab[i];
				tab[i]=temp;
			}
		}
	}
	return tab;
}

void afficheTab(int *tab,int n)
{
	for(int i = 0;i<n;i++)
	{
		printf("tab[%d]=%d\n",i,tab[i]);
	}
}