#ifndef TP5_H_INCLUDED
#define TP5_H_INCLUDED
#include "entree_sortie.h"
#include <stdio.h>
#include <stdlib.h>
void tri_bulles(int T[], int nb)
{
int i, ok, aux;
do
{
ok=0;
for (i=0;i < nb-1; i++)
if (T[i] > T[i+1])
{
aux = T[i];
T[i] = T[i+1];
T[i+1] = aux;
ok=1;
}
nb--;
}while(nb && ok);
}

void tri_insertion(int T[], int nb)
{
int i,j, aux;
for (i=1; i < nb ; i++)
{
aux = T[i];
j=i;
while(aux<T[j-1]&&j>0)
{
T[j] = T[j-1];
j--;
}
T[j]=aux;
}
}

void tri_selection(int T[], int nb)
{
int i,j, posmin, aux;
for (i=0; i < nb - 1; i++)
{
for (posmin = i, j=i+1;j < nb; j++)
if (T[j] < T[posmin])
posmin = j;
if (posmin!=i)
{
aux = T[i];
T[i] = T[posmin];
T[posmin] = aux;
}
}
}

int rech_seq(int T[], int nb,int val)
{
int i, pos=-1;
for (i = 0; i < nb; i++)
if (T[i] == val)
{
pos=i;
break;
}
return pos+1;
}

int rech_dicho(int T[], int nb,int val)
{
int inf=0,mil,sup=nb, pos=-1;
while(inf<=sup)
{
mil=(inf+sup)/2;
if (T[mil] == val)
{
pos=mil;
break;
}
else
if (val <T[mil])
sup=mil-1;
else
inf =mil+1;
}
return pos+1;
}

#endif // TP5_H_INCLUDED
