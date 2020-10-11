#ifndef TP2_H_INCLUDED
#define TP2_H_INCLUDED
#include "entree_sortie.h"
#include <stdio.h>
#include <stdlib.h>

long int CARRE(long int N)
{
    long int S;
    int i;
    for (S=0,i=1;i<=2*N;i=i+2)
        S+=i;
    return S;
}

void MULTIPARFAIT(long int N)
{
    long int S=0,i;

    for(S=1+N,i=2;i<=N/2;i++)
        if (N%i==0)
            S=S+i;
    if (S%N==0)
        printf("%ld est un nombre multiparfait",N);
    else
        printf("%ld n'est pas un nombre multiparfait",N);
}

void DIVISIBLE_13(long int N)
{
    long int u,ok=0;
    long int d,X;
    X=N;

    do
    {
        u=N%10;
        d=N/10;
        N=d+4*u;
        if (N==13||N==26||N==39)
            {
                ok=1;
                break;
            }
    }while(N>=10);

    if (ok==1)
        printf("%ld est divisible par 13",X);
    if (ok!=1)
        printf("%ld n'est pas divisible par 13",X);
}
int PREMIER(long int n)
{
    int i,test;

    if (n==1)
        test=0;
    else
        for(test=1,i=2;i<=2;i++)
            if (n%i==0)
                {
                    test=0;
                    break;
                }

    return test;
}

long int INVERSER_LONG_INT(long int n)
{
    long int inv=0;
    while(n)
    {
        inv=inv*10+n%10;
        n=n/10;
    }
    return inv;
}
int SUPER_PREMIER(long int n)
{
    int test=1;

    while(n)
        {
            if (PREMIER(n)==0)
                {
                    test=0;
                    break;
                }
        n=n/10;
        }
    return test;
}

void TESTER_SUPER_PREMIER(long int n)
{
    int y;
    if (PREMIER(n))
        {
            y=INVERSER_LONG_INT(n);
            if(SUPER_PREMIER(n)&&PREMIER(y))
                printf("%ld est super premier et premier dans les seux sens",n);
            else
                if (PREMIER(y))
                    printf("%ld est premier dans les deux sens",n);
            else
                printf("%ld est ni super premier ni premier dans les deux ",n);
        }
    else
        printf("%ld n'est pas premier",n);

}

#endif // TP2_H_INCLUDED
