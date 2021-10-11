#include <stdio.h>
#include <stdlib.h>

//Prototype
int* triTab(int tab[],int size);
int compareTab(int tab1[],int tab2[],int size);
void affficheTableaux(int T1[],int tailleTab);
int* contenuTableaux(int T1[],int tailleTab);


int main(int argc, char const *argv[])
{
	int *t1,*t2,*tab1_Trie,*tab2_trie,size,siEgal=0;
	printf("Entrer la taille du tableau\n");
	scanf("%d\n",&size);
	t1=malloc(size*sizeof(int));
	t2=malloc(size*sizeof(int));
	tab1_Trie=malloc(size*sizeof(int));
	tab2_trie=malloc(size*sizeof(int));
	printf("Tab1 :");
	t1=contenuTableaux(t1,size);
	printf("Tab2 :");
	t2=contenuTableaux(t2,size);
	tab1_Trie=triTab(t1,size);
	printf(" Affichage Tab1 apres tri :\n");
	affficheTableaux(t1,size);
	tab2_trie=triTab(t2,size);
	printf(" Affichage Tab2 apres tri :\n");
	affficheTableaux(t2,size);
	printf("Comparaison T1 et T2 : \n");
	siEgal=compareTab(tab1_Trie,tab2_trie,size);
	printf("%d\n",siEgal);
	if(siEgal==1)
	{
		printf("Les 2 tableaux sont égaux\n");
	}
	else
	{
		printf("Les 2 tableaux sont differentes\n");
	}
	return 0;
}

int* triTab(int tab[],int size)
{
	int temp = 0;
	for(int i = 0; i<size ;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(tab[i]>tab[j])
			{
				temp=tab[i];
				tab[i]=tab[j];
				tab[j]=temp;
			}
		}
	}
	return tab;
}

int compareTab(int tab1[],int tab2[],int size)
{
	int egal = 0;
	for(int i=0;i<size;i++)
	{
			if(tab1[i]!=tab2[i])
			{
				egal=0;
				break;
			}
			else
			{
				egal=1;
			}
		
		
	}
	return egal;
}

void affficheTableaux(int T1[],int tailleTab)
{
	int i,j;
	for(i=0;i<tailleTab;i++)
	{
		printf("T1[%d]=%d\n",i,T1[i]);
	}
}
int* contenuTableaux(int T1[],int tailleTab)
{
	int i,j;
	for(i=0;i<tailleTab;i++)
	{
		printf("T1[%d]=",i);
		scanf("%d\n",&T1[i]);	
	}
	return T1;
}