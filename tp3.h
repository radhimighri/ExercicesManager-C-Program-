#ifndef TP3_H_INCLUDED
#define TP3_H_INCLUDED
#include "entree_sortie.h"
#include <stdio.h>
#include <stdlib.h>
void TRANSFERE(int T1[],int n,int V1[])
{
    int i,j,k;
    for(i=0,j=0,k=n-1;i<n;i++)
        if(i%2==1)
            {
                V1[k]=T1[i];
                k--;
            }
        else
            {
                V1[j]=T1[i];
                j++;
            }
}



int SYMETRIQUE_TAB(int T2[], int n)
{
    int i,test=1;

    for(i=0;i<n/2;i++)
        if(T2[i]!=T2[n-i-1])
            {
                test=0;
                break;
            }

    return test;
}

void INVERSE_TAB(int T3[],int n)
{
    int i,j,r=0;

    for(i=0,j=n-1;i<n/2+1,j>n/2-1;i++,j--)
        {
            r=T3[i];
            T3[i]=T3[j];
            T3[j]=r;
        }

}

void ROTATION_CIRCULAIRE(int n, int T4[],int k)
{
    int r,i;
    r=T4[0];
    for(i=0;i<n-1;i++)
        {
            T4[k]=T4[n-1];
            T4[n-1]=r;
        }

}

void ROTATIONS_CIRCULAIRES_K(int T4[], int n, int k)
{
    int  i;
    for(i=1;i<k;i++)
        ROTATION_CIRCULAIRE(n,T4,k);

}


void INSERTION(int T5[],int n)
{
    int i,val,pos;
    val=SAISIE_VALEUR();
    do
        {
            pos=SAISIE_POSITION()-1;
        }
    while(!(pos>-1||pos<=n));
    for(i=n;i>=pos;i--)
        T5[i+1]=T5[i];
    T5[pos]=val;

}

/*int EXISTE(int T[],int n,int x)
{
    int ok=0,i;

    for(i=0;i<n;i++)
        if(T[i]==x)
        {
            ok=1;
            break;
        }
    return ok;
}

void PRESENTS(int T6[],int T7[],int V2[],int n1,int n2)
{
    int nv=0,i;
    for(i=0;i<n1;i++)
        if(EXISTE(T7,n1,T6[i])==1 && EXISTE(V2,nv,T6[i])==0)
            {
                V2[nv]=T6[i];
                nv++;
            }

}

void ABSENTS(int T6[],int T7[],int n1,int n2)
{
    int V3[50],nv=0,i;
    for(i=0;i<n1;i++)
        if(EXISTE(T7,n1,T6[i])==0 && EXISTE(V3,nv,T6[i])==0)
            {
                V3[nv]=T6[i];
                nv++;
            }
}
*/

int present(int T[],int T2[],int V[],int n,int m)
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          if (T[i]==T2[j])
          {
          V[i]=T[i];
          printf("%d|",V[i]);
          }
        }
    }
}


int absents(int T[],int T2[],int V[],int n,int m)
{
    int i=0,j;
    while(i<n)
    {
        for(j=0;j<m;j++)
        {
          if (T[i]==T2[j])
          i++;
        }
	    V[i]=T[i];
        printf("%d|",V[i]);
		i++;
    }
}




void VAL_SUP_TAB(int n, int T[],int val)
{
	int i,val_min=val;

	for(i=0;i<n;i++)

		if(T[i]>val)
		{
			printf("%d\t",T[i]);
			if((T[i]>val&&T[i]<val_min)||val_min==val)
			val_min=T[i];
		}

	if(val_min!=val)
		printf("Le plus petit élément de T8 est %d",val_min);
	else
        printf("Il n y a pas de valeur supérieure à val dans le tableau T8");
}




void cherchersup(int T[],int n,int m)
{
    int i,min=100;
    for (i=0;i<n;i++)
    {
       if (T[i] > m)
		   printf("%d|",T[i]);
    }

}






void occurence(int tab[],int taille)
{
	int i,occ=0,occfinal=0,number,j;

	for(i=0;i<taille;i++)
	{
		occ=0;
		for(j=0;j<taille;j++)
			if(tab[j]==tab[i])occ++;
		if(occ>occfinal)
		{
			number=tab[i];
			occfinal=occ;
		}
	}

	printf("le nombre frequant dans ce tableau est %d et son occurence est %d",number,occfinal);
}
 void PLATEAU(int T10[],int N)
 {
     int i,pos_deb=0,pos_fin,cp=1,long_max=1;
     for(i=0;i<N;i++)
        if(T10[i]-T10[i-1]==0)
        {
            cp++;
            if(cp>long_max)
            {
                long_max=cp;
                pos_deb=i-cp+1;
                pos_fin=i;
            }
        }
        else
            cp=1;
    if(long_max>1)
        printf("La longueur =%d, l'indice de début =%d et de fin =%d du plus long plateau de ce tableau \n",long_max,pos_deb+1,pos_fin+1);
    else
        printf("Il n'existe pas de plateau");
}
void DEPLACER(int T12[],int n)
{
    int i,j,r;
    for(i=0;i<n;i++)
    {
        if(T12[i]==0)
        {
            j=i;
            do
            {
             r=T12[j];
             T12[j]=T12[j+1];
             T12[j+1]=r;
             j++;
            }while(j<n);
        }
    }

}















void deplacerzero(int T[],int n)
{
    int i=0,j,aux;
    while(i<=n-1)
    {
        if(T[i]==0)
        {
            for(j=i;j<=n-1;j++){
                aux=T[j];
                T[j]=T[j+1];
                T[j+1]=aux;
        }n--;
        }
        else
            i++;
    }
}


void zero(int t[],int n)
{
    int i,j,aux =0;
    for (i=0;i<=n-1;i++)
     {
         if(t[i]==0)
           {
               for (j=i;j<n;j++)
                {
                  aux = t[j];
                  t[j]= t[j+1];
                  t[j+1]= aux;
                }
            }
         n=n-1;
     }
}


long int INVERSE(long int y)
{
    long int inv=0;
    while(y)
    {
        inv=inv*10+y%10;
        y=y/10;
    }
    return inv;
}

int SYMETRIQUE_VAL(long int x)
{
    int ok=0;
    if(INVERSE(x)==x)
        ok=1;
        return ok;
}
void SYM_TAB(int T11[],int n)
{
    int i;

    for(i=0;i<n;i++)
        if(SYMETRIQUE_VAL(T11[i])==1)
            printf("|%d ",T11[i]);
}




#endif // TP3_H_INCLUDED
