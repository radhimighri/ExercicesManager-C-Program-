#ifndef TP4_H_INCLUDED
#define TP4_H_INCLUDED
#include "entree_sortie.h"
#include <stdio.h>
#include <stdlib.h>
void somm_diag(int n,int m[n][n])
{
    int i;long int somme=0;

    for(i=0;i<n;i++)
        somme+=m[i][i];

    printf("la somme des elements de diagonale principale de la matrice est %ld",somme);

}




void somm_diag_inf(int n,int m[n][n])
{
    int i,j;long int somme=0;

    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            somme+=m[j][i];

    printf("la somme du triangle inferieur de la matrice est %ld",somme);
}

void symt_mat(int n,int m[n][n])
{
    int i,j;int ok=1,ok2=1;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
             if(m[i][j]!=m[j][i])
             {
                 ok=0;
                 break;
             }
    if(ok==0)
        break;
    }

    int lignefix=n-1;
    int colonnefix=0;
    int lignevar=n-1;
    int colonnevar=0;

    while(colonnefix<n&&lignefix>=0)
    {
        colonnevar=colonnefix;
        lignevar=lignefix;
        while (colonnevar<n&&lignevar>=0)
        {
            if(m[lignefix][colonnevar]!=m[lignevar][colonnefix])
            {
                ok2=0;
                break;
            }
            colonnevar++;
            lignevar--;
        }
        if(ok2==0)
            break;
        lignefix--;
        colonnefix++;
    }

    if(ok2==1)printf("la matrice est symetrique par rapport au deuxieme diagonal, ");
    if(ok==1)printf("la matrice est symetrique par rapport au premier diagonal \n");
    if(ok==0&&ok2==0)printf("la matrice n'est pas symetrique");
}
/////////////////////////////////////////////////
/////////////////////////////////////////////


void col_mat(int l,int c,long int m[l][c])
{
    int i,j;

    for(i=0;i<l;i++)
        for(j=0;j<c;j++)
            if(grand_de_colonne(i,j,l,c,m)==1&&petit_de_ligne(i,j,l,c,m)==1)
                printf("M(%d,%d)=%ld est POINT-COL.\n",i+1,j+1,m[i][j]);


}

int petit_de_ligne(int ligne,int colonne,int l,int c,long int m[l][c])
{
    int i,ok=1;long int min=m[ligne][colonne];

    for(i=0;i<c;i++)
        if(m[ligne][i]<min)
        {
            ok=0;
            break;
        }

    return ok;
}

int grand_de_colonne(int ligne,int colonne,int l,int c,long int m[l][c])
{
    int i,ok=1;long int max=m[ligne][colonne];

    for(i=0;i<l;i++)
        if(m[i][colonne]>max)
        {
            ok=0;
            break;
        }

    return ok;
}
#endif // TP4_H_INCLUDED
