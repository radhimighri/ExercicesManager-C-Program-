#ifndef ENTREE_SORTIE_H_INCLUDED
#define ENTREE_SORTIE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include"tp4.h"

/***************************Saisie taille d'un tableau**************************/

int SAISIE_TAILLE()
{
    int n;

    do
    {
        printf("saisie la taille du tableau:\t");
        scanf("%d",&n);
    }while (!(n>1&&n<=50));

    return n;

}
/***************************Saisie taille 2**************************/

int SAISIE_TAILLE2()
{
    int n;

    do
    {
        printf("saisie la taille du T11 (5>= N <=50:\t");
        scanf("%d",&n);
    }while (!(n>=5&&n<=50));

    return n;

}
/***************************Saisie taille 3**************************/

int SAISIE_TAILLE3()
{
    int n;

    do
    {
        printf("Saisie la taille du T12 (5>= N <=20):\t");
        scanf("%d",&n);
    }while (!(n>=5&&n<=20));

    return n;

}



/***************************Saisie une valeur**************************/

int SAISIE_VALEUR()
{
    int val;
    printf("Entrer une valeur:");
    scanf("%d",&val);
    return val;
}

/***************************Saisie un entier**************************/

long int SAISIE_ENTIER()
{
    long int n;

    do
    {
        printf("Entrer un entier strictement positif: \t");
        scanf("%ld",&n);
    }while (!(n>0));

    return n;

}
/***************************Saisie un entier2**************************/

long int SAISIE_ENTIER2()
{
    long int n;

    do
    {
        printf("Entrer un entier superieur a 10: \t");
        scanf("%ld",&n);
    }while (!(n>10));

    return n;

}

/***************************Saisie la position**************************/

int SAISIE_POSITION()
{
    int position;
    printf("Entrer une position:");
    scanf("%d",&position);
    return position;
}
/***************************Saisie taille matrice 1**************************/

int SAISIE_TAILLE_MATRICE1()
{
    int n;

    do
    {
        printf("Saisie la taille de Matrice (N<=20):\t");
        scanf("%d",&n);
    }while (!(n>1&&n<=20));

    return n;

}
/***************************saisie nombre de ligne de matrice**************************/

int SAISIE_TAILLE_MATRICE_L()
{
    int n;

    do
    {
        printf("saisie nombre de lignes du matrice:\t");
        scanf("%d",&n);
    }while (!(n>1&&n<=20));

    return n;

}
/***************************Saisie taille matrice**************************/

int SAISIE_TAILLE_MATRICE_C()
{
    int n;

    do
    {
        printf("saisie nombre de colonnes du matrice:\t");
        scanf("%d",&n);
    }while (!(n>1&&n<=20));

    return n;

}
/***************************Remplir1**************************/

void REMPLIR1(long int t[],int n )
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("T[%d]= ",i+1);
        scanf("%ld",&t[i]);
    }
}
/***************************Remplir2**************************/

void REMPLIR2(int t[],int n )
{
    int i;

    for(i=0;i<n;i++)
    {
        do
        {
            printf("T[%d]= ",i+1);
            scanf("%d",&t[i]);
        }while(!(t[i]>=0));

    }
}
/***************************Remplir3**************************/

void REMPLIR3(long int t[],int n )
{
    int i;

    for(i=0;i<n;i++)
    {
        do
        {
            printf("T[%d]= ",i+1);
            scanf("%ld",&t[i]);
        }while(!(t[i]>100));

    }
}
/***************************Remplir4**************************/

void REMPLIR4(int n , int T[n][n] )
{
    int i,j;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            printf("M[%d][%d]= ",i+1,j+1);
            scanf("%ld",&T[i][j]);
        }
}
/***************************Remplir5**************************/

void REMPLIR5(int l, int c, int t[50][50] )
{
    int i,j;

    for(i=0;i<l;i++)
        for(j=0;j<c;j++)
        {
            printf("M[%d][%d]= ",i+1,j+1);
            scanf("%ld",&t[i][j]);
        }
}
/***************************Afficher1**************************/
void AFFICHER1( int t[],int n )
{
    int i;
    printf("\n \n");
    for(i=0;i<n;i++)
        printf("| %d ",t[i]);
    printf(" \n \n \n ");

}
/***************************Afficher2**************************/

void AFFICHER2(long int t[],int n )
{
    int i;

    for(i=0;i<n;i++)
        printf("| %d ",t[i]);

}

/***************************Afficher3**************************/

void AFFICHER3(int n ,long int t[n][n])
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("| %d ",t[i][j]);
        printf("\n");
    }

}

/***************************Afficher4**************************/

void AFFICHER4(int l, int c,long int t[50][50] )
{
    int i,j;

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
            printf("| %d ",t[i][j]);
        printf("\n");
    }

}







/****Fonction enregistrement****/
void enregistrement(int t[],int n,char * nomFichier)
{
    int i;
    FILE *fp;
    fp=fopen(nomFichier,"w");
    fprintf(fp,"%d\n",n); // sauvegarder la taille de tablau
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%d ",t[i]);
    }
    fclose(fp);
    printf ("\nEnregistrement du tableau dans le fichier %s \n",nomFichier);
}

 /****Fonction recuperation****/
int recuperation (int t[], char *nomFichier)
{
    int nbElement=0 ,i;
    FILE *fp;
    int x;
    fp=fopen(nomFichier,"r");
    if(fp!=NULL)
    {

        fscanf(fp,"%d\n",&nbElement);
        if(nbElement)
        {
            for(i=1;i<=nbElement;i++)
            {
                fscanf(fp,"%d",&x);
                t[i-1]=x;
            }
        }
    }
    else
        printf("\n Fichier vide \n");
    return nbElement;
}



//+++++++++++++++++++++++++++++++++++++++++++++++
void enregistrementMat(int m[50][50],int l,int c,char * nomFichier)
{
    int i,j;
    FILE *fp;
    fp=fopen(nomFichier,"w");
    fprintf(fp,"%d %d\n",l,c);

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {

            fprintf(fp,"%d ",m[i][j]);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
    printf ("\nEnregistrement du matrice dans le fichier %s \n",nomFichier);
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void recuperationMat_col (int t[50][50], char *nomFichier)
{
    int nbL=0,nbC=0,maxx,minn ,i,j;
    FILE *fp;
    int x;
    fp=fopen(nomFichier,"r");
    if(fp!=NULL)
    {

        fscanf(fp,"%d ",&nbL);
        fscanf(fp,"%d\n",&nbC);
            for(i=1;i<=nbL;i++)
            {
                for(j=1; j<=nbC; j++)
                {
                    fscanf(fp,"%d",&x);
                    t[i-1][j-1]=x;
                }

            }
    }

    col_mat(nbL,nbC,t);

}

////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

void recuperationMat_affichage (int t[50][50], char *nomFichier)
{
    int nbL=0,nbC=0,maxx,minn ,i,j;
    FILE *fp;
    int x;
    fp=fopen(nomFichier,"r");
    if(fp!=NULL)
    {

        fscanf(fp,"%d ",&nbL);
        fscanf(fp,"%d\n",&nbC);
            for(i=1;i<=nbL;i++)
            {
                for(j=1; j<=nbC; j++)
                {
                    fscanf(fp,"%d",&x);
                    t[i-1][j-1]=x;
                }

            }
    }

    AFFICHER4(nbL,nbC,t);

}

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
int verif(char * nomFichier)
{
    FILE *fp;
    fp = fopen(nomFichier, "r");
    fseek(fp, 0, SEEK_END);
    if (ftell(fp) != 0) {
        return 1;
    }

    return 0;
}

//===========================================


#endif // ENTREE_SORTIE_H_INCLUDED
