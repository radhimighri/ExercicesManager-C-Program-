#include <stdio.h>// defines scanf() and printf()
#include <windows.h>
#include <myconio.h>
#include "menu.h"
#include "entree_sortie.h"
#include "tp2.h"
#include "tp3.h"
#include "tp4.h"
#include "tp5.h"

//#include <conio.h>
//#include <math.h>//has math functions; exp(x,y)
//#include <stdlib.h>//defines rand()
//# include <string.h>//
//# include <time.h>//defines time()



void main()
{
    int choi1, choi2,choi3,choix,k,choix21,choigame; char choi9;
    int t1[50],t0[50],V1[50],V2[50],t[50],n0,n1,t2[50],n2,t3[50],n3,t4[50],n4,t5[50],n5,t6[50],n6,t8[50],n8,t14[50],n14;
     int t7[50],n7,t9[50],n9,t10[50],n10,t11[50],n11,t12[50],n12,t13[50],n13;
     int t15[50],n15,t16[50],n16,t17[50],n17;
     int A1[50][50],NA1,B[50][50],L,C,D[50][50],ND,E[50][50],M[50][50],M2[50][50],M3[50][50];
    char * nom1="tab1.txt",* nom2="tab2.txt",*nom3="tab3.txt",*nom4="tab4.txt";
    char * nom5="tab5.txt",* nom6="tab6.txt",* nom8="tab8.txt", * nom14="tab14.txt";
    char * nom7="tab7.txt",* nom9="tab9.txt",* nom10="tab10.txt", * nom11="tab11.txt";
    char * nom12="tab12.txt",* nom13="tab13.txt", *nom15="tab15.txt",* nom16="tab16.txt";
    char * nom17="tab17.txt";
     char * nom21="matrice1.txt",* nom22="matrice2.txt",* nom23="matrice3.txt";
     char *nom25="mat3.txt",*nom26="mat4.txt";
    FILE* file,*file5,*file6,*file9,*file10;
    long int n;
    //int x;
   //char c;
   // do
    //{

                            int i;
                            for (i=1;i<16;i++)
                            {
                            clrscr();
                            textattr(i);
                            gotoxy(i, 15);
                            printf("***********************************************************");
                            gotoxy(i, 16);
                            printf("\6                                                         \6");
                            gotoxy(i, 17);
                            printf("\6        \3 \3 \3---%ccole-Polytechnique-Sousse---\3 \3 \3       \6",144);
                            gotoxy(i, 18);
                            printf("\6                                                         \6");
                            gotoxy(i, 19);
                            printf("***********************************************************");
                            Sleep(200);

                            }
                             getch();

                            for (i=1;i<16;i++)
                            {
                            clrscr();
                            textattr(i);
                            gotoxy(i, 17);
                            printf("***************************************************************");
                            gotoxy(i, 18);
                            printf("\6 Bienvenue %c notre Mini-projet en langage de programmation C \6",133);
                            gotoxy(i, 19);
                            printf("\6                                                             \6");
                            gotoxy(i, 20);
                            printf("\6 Qui consiste %c r%caliser une application de gestion des TPs  \6",133,130);
                            gotoxy(i, 21);
                            printf("***************************************************************");
                            Sleep(200);
                            }

                            getch();

                            for (i=1;i<16;i++)
                            {
                            clrscr();
                            textattr(i);
                            gotoxy(i, 17);
                            printf("*********************************************************");
                            gotoxy(i, 18);
                            printf("\6                                                       \6");
                            gotoxy(i, 19);
                            printf("\6                                                       \6");
                            gotoxy(i, 20);
                            printf("\6  D%cvelopp%ce par: MIGHRI Radhi & ZORGATI Abderrahmenne \6",130,130);
                            gotoxy(i, 21);
                            printf("\6                                                       \6");
                            gotoxy(i, 22);
                            printf("\6       Sous la direction de Mr. BEN SALAH Kais         \6");
                            gotoxy(i, 23);
                            printf("\6                                                       \6");
                            gotoxy(i, 24);
                            printf("\6                                                       \6");
                            gotoxy(i, 25);
                            printf("**********************EPS-2018/2019**********************");
                            Sleep(200);
                            }
                            getch();
                            clrscr();

                            ///////////////////////////////////////////////////////////////////////


                                        authentfi:
                                        clrscr();
                                        authentif();
                                        cadreauth();
                                        gotoxy(1,10);
                                        i=0;
                                        char name[20],ch;
                                        char password[10];
                                        gotoxy(1,12);
                                        ;printf("Identifiant: ");
                                        scanf("%s",name);
                                        printf("\n");
                                        printf("Mot de passe de 8 chiffres: ");

                                        while(1){
                                        ch = getch();	//get key

                                        if(ch == 13 || ch == 9){
                                        password[i] = '\0';
                                        break;
                                        }else if(ch == 8){
                                        if(i > 0){
                                        i--;
                                        printf("\b \b");		//for backspace
                                        }
                                        }else{
                                        password[i++] = ch;
                                        printf("* \b");				//to replace password character with *
                                        }
                                        }//while ends here

                                        //scanf("%s",password);
                                        if((strcmp(name, "polytech") == 0 && strcmp(password, "20182019") == 0)||(strcmp(name, "POLYTECH") == 0 && strcmp(password, "20182019") == 0))
                                        {
                                        printf("\n");
                                        int j,i;
                                        printf("\n");
                                        for (i = 0;i < 10100; i++){
                                        textcolor(10);printf("\rLoading in progress please wait : %d ", i/100);
                                        }
                                        printf("\n");
                                        }
                                        else{
                                        printf("\n");
                                        textcolor(12);printf("\nConnexion impossible. v%crifiez vos identifiants de connexion !!!\n",130);
                                        getch();
                                        goto authentfi;
                                        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////
        do

        {
            menu:
            system("color 0F");
            clrscr();
            menuG();
            cadreG();
            gotoxy(40,20);
            printf("Donnez votre choix Menu SVP:");
            scanf("%d", &choi1);
        } while (choi1 <1 || choi1 >9);
        switch (choi1)
        {
            case 1: //tp1
                do
                {
                    bloc2:
                    clrscr();
                    menu_tp1();
                    cadreG();
                    gotoxy(47,20);
                    printf("Donner votre choix pour TP2 SVP:");
                    scanf("%d", &choi2);
                } while (choi2 <1 || choi2 >4);
                clrscr();
                switch(choi2)
                {
                    case 1: //tp2 exercice1
                        do
                            {
                                bloc113:
                                clrscr();
                                TP2_EX1();
                                cadreG();
                                textcolor(11);
                                gotoxy(47,20);
                                textcolor(11);

                                //printf("Execution de l'exercice 1 TP2\n");
                                gotoxy(47,20);
                                textcolor(15);
                                printf("Donner votre choix TP2 EX1 SVP:");
                                scanf("%d", &choix21);
                                } while (choix21 <1 || choix21 >4);
                                clrscr();
                                 switch(choix21)
                             {
                              case 1:

                                  ///////////
                                    clrscr();
                                    textattr(11);
                                    int i;
                                    for (i=1;i<8;i++)
                                    {
                                    textattr(i);
                                    clrscr();
                                    gotoxy(i,4); printf("********************************************************************");
                                    gotoxy(i,5);printf ("Ex%ccution Probleme 1 Calculer le carr%c d'un entier saisie au clavier",130,130);
                                    gotoxy(i,6);printf ("********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();

                                    gotoxy(1,8);
                                    int n=SAISIE_ENTIER();
                                    printf("\n\n");
                                    printf("le carre de %d  = %d",n,CARRE(n));
                                    gotoxy(1,15); printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc113;
                                //+++++++++++++++++++++++++++++++++++++++++/
                                case 2:
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("Ex%ccution Probleme 2 : Tester si un entier est un Multiparfait ou pas",130);
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                gotoxy(1,8);
                                n=SAISIE_ENTIER();
                                printf("\n\n");
                                MULTIPARFAIT(n);
                                gotoxy(1,15); printf("Appuyer sur une touche pour revenir au menu precedent");
                                getch(); goto bloc113;

                                case 3:
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    textattr(i);
                                    clrscr();
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("     Ex%ccution Probleme 3 : Tester la division d'un entier par 13    ",130);
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                n=SAISIE_ENTIER();
                                printf("\n\n");
                                DIVISIBLE_13(n);
                                    gotoxy(1,15); printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                getch(); goto bloc113;

                                case 4:
                                goto bloc2;


                             }
                              ////////////////////////////////////////////////////  **********************

                    case 2: //tp2 exercice2
                                    clrscr();
                                    int i;
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf (" Ex%ccution d'exercice 2 TP2 : Superpremier & Premier dans les 2 sens ",130);
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                n=SAISIE_ENTIER2();
                                gotoxy(15,10);
                                TESTER_SUPER_PREMIER(n);
                                gotoxy(1,15); printf("Appuyer sur une touche pour revenir au menu de TP2 ");
                                getch(); goto bloc2;


                    case 3: // enonce de TP2
                                ShellExecute(NULL,"open","TP2 GI.pdf",NULL,NULL,SW_SHOWNORMAL);
                                goto bloc2;

                    case 4: //Retour au menu principal
                         goto menu;

                }
    case 2: //TP3
                    do
                    {
                            bloc3:
                            clrscr();
                            menu_tp2();
                            cadreG();
                            gotoxy(48,23);
                            printf("Donner votre choix SVP : ");
                            scanf("%d", &choi2);
                    } while (choi2 <1 || choi2 >7);
                    clrscr();
                    switch(choi2)
                    {
                        case 1: //TP3 REMPLISSAGE
                            do
                            {
                                blocR:
                                clrscr();
                                menu_remplissage_tp2();
                                cadre_tp3();
                                gotoxy(47,22);
                                printf("Donner votre choix SVP : ");
                                scanf("%d",&choi3);
                            } while( choi3 < 1 || choi3 > 13);
                            clrscr();
                            switch(choi3)
                            {
                                case 1: //T1
                                    textcolor(11);
                                    n=recuperation(t,nom1);
                                    clrscr();
                                    int i;
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T1 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T1 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom1);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom1);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;


                                case 2: //T2
                                    textcolor(11);
                                    n=recuperation(t,nom2);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T2 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T2 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom2);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom2);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                case 3: //T3
                                    textcolor(11);
                                    n=recuperation(t,nom3);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T3 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T3 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom3);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom3);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 4: //T4
                                    textcolor(11);
                                    n=recuperation(t,nom4);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T4 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T4 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom4);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom4);
                                    textcolor(15);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(15);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 5: //T5
                                    textcolor(11);
                                    n=recuperation(t,nom5);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T5 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T5 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom5);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom5);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 6: //T6
                                    textcolor(11);
                                    n=recuperation(t,nom6);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T6 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T6 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom6);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom6);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 7: //T7
                                    textcolor(11);
                                    n=recuperation(t,nom7);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);

                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T7 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T7 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom7);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom7);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 8: //T8
                                    textcolor(11);
                                    n=recuperation(t,nom8);
                                    clrscr();
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T8 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T8 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom8);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom8);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 9: //T9
                                    textcolor(11);
                                    n=recuperation(t,nom9);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T9 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T9 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom9);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR2(t1,n1);
                                    enregistrement(t1,n1,nom9);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 10: //T10
                                    textcolor(11);
                                    n=recuperation(t,nom10);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);

                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T10 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T10 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom10);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom10);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 11: //T11
                                    textcolor(11);
                                    n=recuperation(t,nom11);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T11 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T11 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom11);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 12: //T12
                                    textcolor(11);
                                    n=recuperation(t,nom12);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T12 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T12 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom12);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom12);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;
                                    }
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR;

                                case 13: goto bloc3;
                    }

                case 2: //TP3 EX1
                                do
                                {
                                    bloc77:
                                    clrscr();
                                    menu_Ex2_tp2();
                                    cadreG();
                                    gotoxy(48,22);
                                    printf("Donner votre choix SVP : ");
                                    scanf("%d",&choi3);
                            } while( choi3 < 1 || choi3 > 8);
                            clrscr();
                            switch(choi3)
                            {
                                case 1://transfere
                                            textcolor(11);
                                            n=recuperation(t,nom1);
                                            clrscr();
                                            int i;
                                            textattr(11);
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                    textattr(i);

                                            gotoxy(i,2); printf("*********************************************************************");
                                            gotoxy(i,3);printf ("            Ex%ccution exercice 1-1 TP3 : Transfere T1 %c V1              ",130,175);
                                            gotoxy(i,4);printf ("*********************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,8);
                                            if (n==0){
                                            do
                                            {
                                            textattr(14);
                                            printf("Tableau T1 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                            switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom1);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
                                            else{
                                            printf("\nContenu de tableau T1:\n");
                                            AFFICHER1(t,n);
                                            TRANSFERE(t,n,V1);
                                            printf("\nContenu de tableau V1 apres le Transfert:\n");
                                            AFFICHER1(V1,n);
                                            printf("\n\n\n\t\t\t"); printf("Appuyer sur une touche pour revenir au menu precedent ");
                                            getch(); goto bloc77;
                                            }
                                case 2://symetrique
                                            textcolor(11);
                                            n=recuperation(t,nom2);
                                            clrscr();
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                    textattr(i);
                                            gotoxy(i,2); printf("************************************************************************");
                                            gotoxy(i,3);printf ("    Ex%ccution exercice 1-2 TP3: Verifier si T2 est symetrique ou pas",130);
                                            gotoxy(i,4);printf ("************************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,8);
                                            if (n==0){
                                            do
                                            {
                                            textattr(14);
                                            printf("Tableau T2 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                            switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom2);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
                                            else{
                                            printf("\nAffichage de tableau T2 :\n");
                                            AFFICHER1(t,n);
                                            if (SYMETRIQUE_TAB(t,n))
                                            printf("\nCe Tableau est symetrique\n");
                                            else
                                            printf("\nCe Tableau n'est pas symetrique\n");
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                case 3://Inversion
                                            textcolor(11);
                                            n=recuperation(t,nom3);
                                            clrscr();
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                    textattr(i);
                                            gotoxy(i,2); printf("************************************************************************");
                                            gotoxy(i,3);printf ("          Ex%ccution exercice 1-3 TP3: Inversion du tableau T3            ",130);
                                            gotoxy(i,4);printf ("************************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,8);
                                            if (n==0){
                                            do
                                            {
                                            textattr(14);
                                            printf("Tableau T3 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                            switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom3);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
                                            else{
                                            printf("\nAffichage de tableau T3 avant l'inversion:\n");
                                            AFFICHER1(t,n);
                                            printf("\nAffichage de tableau T3 apres l'inversion:\n");
                                            INVERSE_TAB(t,n);
                                            AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                case 4://rotation_k
                                            textcolor(11);
                                            n=recuperation(t,nom4);
                                            clrscr();
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                    textattr(i);
                                            gotoxy(i,2); printf("************************************************************************");
                                            gotoxy(i,3);printf ("           Ex%ccution exercice 1-4 TP3: Rotation_K dans tableau T4               ",130);
                                            gotoxy(i,4);printf ("************************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,8);
                                            if (n==0){
                                            do
                                            {
                                            textattr(14);

                                            printf("Tableau T4 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                            switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom4);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
                                            else{
                                            printf("\nAffichage de tableau T4 avant la rotation:\n");
                                            AFFICHER1(t,n);
                                            k=SAISIE_ENTIER();
                                            printf("\nAffichage de tableau T4 apres la rotation:\n");
                                            ROTATIONS_CIRCULAIRES_K(t,n,k);
                                            AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }

                                case 5://insertion
                                            textcolor(11);
                                            n=recuperation(t,nom5);
                                            clrscr();
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                    textattr(i);
                                            gotoxy(i,2); printf("************************************************************************");
                                            gotoxy(i,3);printf ("        Ex%ccution exercice 1-5 TP3: Insertion dans tableau T5           ",130);
                                            gotoxy(i,4);printf ("************************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,8);
                                            if (n==0){
                                            do
                                            {
                                    textattr(14);
                                            printf("Tableau T5 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                            switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom5);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
                                            else{
                                            printf("\nAffichage de tableau T5 avant l'insertion:\n");
                                            AFFICHER1(t,n);
                                            INSERTION(t,n);
                                            printf("\nAffichage de tableau T5 apres l'insertion:\n");
                                            AFFICHER1(t,n+1);
                                            enregistrement(t,n+1,nom5);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                case 6://PRESENTS
                                            textcolor(11);
                                            n0=recuperation(t0,nom6);
                                            n=recuperation(t,nom7);
                                            clrscr();
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                    textattr(i);
                                            gotoxy(i,2); printf("************************************************************************");
                                            gotoxy(i,3);printf ("                 Ex%ccution exercice 1-6 TP3: Pr%csents                   ",130,130);
                                            gotoxy(i,4);printf ("************************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,5);
                                            if (n0==0){
                                            do
                                            {
                                    textattr(14);
                                            printf("Tableau T6 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                            switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom6);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
											else if (n==0)
                                            {
											do
                                            {
                                    textattr(14);
                                            printf("Tableau T7 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                            switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom7);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
                                            else{
                                            printf("\nContenu de tableau T6:\n");
                                            AFFICHER1(t0,n0);
                                            printf("\nContenu de tableau T7:\n");
                                            AFFICHER1(t,n);
                                            printf("\nContenu de tableau V2 : les %cl%cments pr%csents de T6 et T7:\n\n\n",130,130,130);
                                            present(t0,t,V2,n0,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                case 7://ABSCENTS
                                            n0=recuperation(t0,nom6);
                                            n=recuperation(t,nom7);
                                            clrscr();
                                            textcolor(11);
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                    textattr(i);
                                            gotoxy(i,2); printf("************************************************************************");
                                            gotoxy(i,3);printf ("                 Ex%ccution exercice 1-7 TP3: Abscents",130);
                                            gotoxy(i,4);printf ("************************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,5);
                                            if (n0==0){
                                            do
                                            {
                                    textattr(14);

                                            printf("Tableau T6 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom6);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
											else if (n==0)
                                            {
											do
                                            {
                                    textattr(14);
                                            printf("Tableau T7 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom7);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc77;
                                            }
                                            }
                                            else{
                                            printf("\nContenu de tableau T6\n");
                                            AFFICHER1(t0,n0);
                                            printf("\nContenu de tableau T7\n");
                                            AFFICHER1(t,n);
                                            printf("\nContenu de tableau V3 : les %cl%cments abscents de T6 et T7:\n\n\n",130,130);
                                            absents(t0,t,V2,n0,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc77;
                                            }
                                case 8: //Retourner au menu TP3
                                     goto bloc3;
                            }

                case 3: //tp2 ex4
                                    do
                                        {
                                            bloc666:
                                            clrscr();
                                            menu_Ex4_tp2();
                                            cadreG();
                                            gotoxy(48,21);
                                            printf("Donner votre choix SVP:");
                                            scanf("%d",&choi3);
                                        } while( choi3 < 1 || choi3 > 4);
                                        clrscr();
                                    switch(choi3)
                                    {

                                        case 1://Recherche element SUP dans Tableau 8
                                            textcolor(11);
                                            n=recuperation(t,nom8);
											clrscr();
											int i;
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                    textattr(i);
                                            gotoxy(i,2); printf("************************************************************************");
                                            gotoxy(i,3);printf ("   Ex%ccution exercice 2_1 TP3 Recherche %cl%cments sup%crieurs dans Tab8",130,130,130,130);
                                            gotoxy(i,4);printf ("************************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,5);
                                            if (n==0){
                                            do
                                            {
                                    textattr(14);
                                            printf("Tableau T8 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom8);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc666;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc666;
                                            }
                                            }


                                                 else
                                                    {
                                                 printf("Affichage de Tableau 8 :\n");
                                                 AFFICHER1(t,n);
                                                 int v=SAISIE_VALEUR();
                                                 printf("Les %cl%cments qui sont sup%crieur a %d dans le tableau T8 sont: \n\n",130,130,130,v);
                                                 cherchersup(t,n,v);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                 getch(); goto bloc666;
                                                    }

                                        case 2://Recherche frequant
                                                textcolor(11);
                                                n=recuperation(t,nom9);
                                                clrscr();
                                                for (i=1;i<8;i++)
                                                {
                                                clrscr();
                                    textattr(i);
                                                gotoxy(i,2); printf("************************************************************************");
                                                gotoxy(i,3);printf ("  Ex%ccution exercice 2_2 TP3 Recherche de l'%cl%cment fr%cquant dans Tab9",130,130,130,130);
                                                gotoxy(i,4);printf ("************************************************************************");
                                                Sleep(200);
                                                }
                                                getch();
                                                gotoxy(1,5);
                                                if (n==0){
                                                do
                                                {
                                    textattr(14);
                                                printf("Tableau T9 est vide !!! voulez vous le remplir O/N ? : ");
                                                scanf("%s", &choi9);
                                                } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                                {
                                                case 'O':
                                                {int n=SAISIE_TAILLE();
                                                REMPLIR1(t,n);
                                                enregistrement(t,n,nom9);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                getch(); goto bloc666;
                                                }
                                                case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                getch();goto bloc666;
                                                }
                                                }

                                                 else {
                                                 printf("Affichage de Tableau 9 :\n");
                                                 AFFICHER1(t,n);
                                                 occurence(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                 getch(); goto bloc666;
                                                 }

                                        case 3://Recherhce Plateau
                                                textcolor(11);
                                                n=recuperation(t,nom10);
                                                clrscr();
                                                for (i=1;i<8;i++)
                                                {
                                                clrscr();
                                    textattr(i);
                                                gotoxy(i,2); printf("************************************************************************");
                                                gotoxy(i,3);printf ("         Ex%ccution exercice 2_3 TP3 Recherche Plateau dans Tab10",130);
                                                gotoxy(i,4);printf ("************************************************************************");
                                                Sleep(200);
                                                }
                                                getch();
                                                gotoxy(1,5);
                                                if (n==0){
                                                do
                                                {
                                    textattr(14);
                                                printf("Tableau T10 est vide !!! voulez vous le remplir O/N ? : ");
                                                scanf("%s", &choi9);
                                                } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                                {
                                                case 'O':
                                                {int n=SAISIE_TAILLE();
                                                REMPLIR1(t,n);
                                                enregistrement(t,n,nom10);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                getch(); goto bloc666;
                                                }
                                                case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                getch();goto bloc666;
                                                }
                                                }

                                                 else {
                                                 printf("Affichage de Tableau 10 :\n\n");
                                                 AFFICHER1(t,n);
                                                 PLATEAU(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                 getch(); goto bloc666;
                                                 }

                                        case 4: //Retourner au manu 3
                                             goto bloc3;
                                    }
                        case 4: //tp3 ex3 : Afficher les elements symetriques
                                                textcolor(11);
                                                n=recuperation(t,nom11);
                                                clrscr();
                                                int i;
                                                for (i=1;i<8;i++)
                                                {
                                                clrscr();
                                    textattr(i);
                                                gotoxy(i,2); printf("************************************************************************");
                                                gotoxy(i,3);printf ("   Ex%ccution exercice 3 TP3 Afficher les %cl%cments sym%ctriques dans T11",130,130,130,130);
                                                gotoxy(i,4);printf ("************************************************************************");
                                                Sleep(200);
                                                }
                                                getch();
                                                gotoxy(1,5);
                                                if (n==0){
                                                do
                                                {
                                    textattr(14);
                                                printf("Tableau T11 est vide !!! voulez vous le remplir O/N ? : ");
                                                scanf("%s", &choi9);
                                                } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                                {
                                                case 'O':
                                                {
                                                int n=SAISIE_TAILLE2();
                                                REMPLIR3(t,n);
                                                enregistrement(t,n,nom11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                getch(); goto bloc3;
                                                }
                                                case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                getch();goto bloc3;
                                                }
                                                }

                                                 else {
                                                 printf("Affichage de Tableau T11:\n");
                                                 AFFICHER1(t,n);
                                                 printf("Affichage des %cl%cments sym%ctriques de Tableau:\n\n",130,130,130);
                                                 SYM_TAB(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                 getch(); goto bloc3;
                                                 }
                         case 5: //tp3 ex4 : deplace_zeros
                                                textcolor(11);
                                                n=recuperation(t,nom12);
                                                clrscr();
                                                for (i=1;i<8;i++)
                                                {
                                                clrscr();
                                                textattr(i);
                                                gotoxy(i,2); printf("************************************************************************");
                                                gotoxy(i,3);printf ("Ex%ccution exercice 4 TP3 d%cplacer tous les z%cros %c la fin du tableau T12",130,130,130,133);
                                                gotoxy(i,4);printf ("************************************************************************");
                                                Sleep(200);
                                                }
                                                getch();
                                                gotoxy(1,5);
                                                if (n==0){
                                                do
                                                {
                                    textattr(14);
                                                printf("Tableau T12 est vide !!! voulez vous le remplir O/N ? : ");
                                                scanf("%s", &choi9);
                                                } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                                {
                                                case 'O':
                                                {int n=SAISIE_TAILLE3();
                                                REMPLIR2(t,n);
                                                enregistrement(t,n,nom12);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                getch(); goto bloc3;
                                                }
                                                case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                getch();goto bloc3;
                                                }
                                                }

                                                 else {
                                                 printf("Affichage de Tableau T12 avant le d%cplacement des z%cros :\n",130,130);
                                                 AFFICHER1(t,n);
                                                 zero(t,n);
                                                 printf("Affichage de Tableau T12 apr%cs le d%cplacement des z%cros:\n",138,130,130);
                                                 AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                                 getch(); goto bloc3;
                                                 }

                         case 6: //ennonce du tp3
                                textcolor(11);
                                ShellExecute(NULL,"open","TP3 GI.pdf",NULL,NULL,SW_SHOWNORMAL);
                                //getch();
                                goto bloc3;

                         case 7: //Retour au menu general
                                goto menu;

                    }



            case 3: //TP4
                    do
                        {
                            bloc15:
                            clrscr();
                            menu_tp3();
                            cadreG();
                            gotoxy(48,21);
                            printf("Donner votre choix SVP : ");
                            scanf("%d", &choi2);
                        } while (choi2 <1 || choi2 >6);
                        clrscr();
                        switch(choi2)
                        {
                            case 1: //TP4 Remplissage des matrices

                            do
                            {
                                bloc16:
                                clrscr();
                                menu_remplissage_mat();
                                cadreG();
                                gotoxy(48,21);
                                printf("Donner votre choix SVP : ");
                                scanf("%d",&choi3);
                            } while( choi3 < 1 || choi3 > 4);
                            clrscr();
                            switch(choi3)
                            {
                                case 1: //MAT1
                                    textcolor(11);
                                    int i;
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("************************************************************************");
                                    gotoxy(i,3);printf ("         Remplissage de Matrice 1 par des entiers quelconques ");
                                    gotoxy(i,4);printf ("************************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    char rep;
                                    if(verif(nom21))
                                    {textcolor(14);
                                    printf("La matrice 1 est d%cja remplit voulez-vous remplir de nouveau !!! O/N : ",130);
                                    do
                                    {
                                    scanf("%c", &rep);
                                    }
                                    while(toupper(rep)!='O' && toupper(rep)!='N');
                                    if(toupper(rep)=='O')
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom21);
                                    }
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc16;
                                    }
                                    else
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom21);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc16;
                                    }

                                case 2: //MAT2

                                    textcolor(11);

                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("************************************************************************");
                                    gotoxy(i,3);printf ("         Remplissage de Matrice 2 par des entiers quelconques ");
                                    gotoxy(i,4);printf ("************************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    if(verif(nom22))
                                    {textcolor(14);
                                    printf("La matrice 2 est d%cja remplit voulez-vous remplir de nouveau !!! O/N : ",130);
                                    do
                                    {
                                    scanf("%c", &rep);
                                    }
                                    while(toupper(rep)!='O' && toupper(rep)!='N');
                                    if(toupper(rep)=='O')
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom22);
                                    }
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc16;
                                    }
                                    else
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom22);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc16;
                                    }
                                case 3: //MAT3

                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("************************************************************************");
                                    gotoxy(i,3);printf ("         Remplissage de Matrice 3 par des entiers quelconques ");
                                    gotoxy(i,4);printf ("************************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    if(verif(nom23))
                                    {textcolor(14);
                                    printf("La matrice 3 est d%cja remplit voulez-vous remplir de nouveau !!! O/N : ",130);
                                    do
                                    {
                                    scanf("%c", &rep);
                                    }
                                    while(toupper(rep)!='O' && toupper(rep)!='N');
                                    if(toupper(rep)=='O')
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom23);
                                    }
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc16;
                                    }
                                    else
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom23);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc16;
                                    }

                                case 4: //Retour au menu precedent
                                    goto bloc15;
                            }

                    case 2://TP4 ex1
                            do
                            {
                                bloc17:
                                clrscr();
                                menu_ex1_tp4();
                                cadreG();
                                gotoxy(48,21);
                                printf("Donner votre choix SVP : ");
                                scanf("%d",&choi3);
                            } while( choi3 < 1 || choi3 > 3);
                            clrscr();
                            switch(choi3)
                            {
                                case 1: //MAT1
                                    textcolor(11);
                                    int i;
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("************************************************************************");
                                    gotoxy(i,3);printf (" Ex%ccution Ex1_1 TP4 calcul somme d'%cl%cments de Diag_principale de M1 ",130,130,130);
                                    gotoxy(i,4);printf ("************************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    printf("Remplissage de Matrice M1 par des entiers quelconques : \n\n");
                                    int n1=SAISIE_TAILLE_MATRICE1();
                                    REMPLIR4(n1,M);
                                    printf("Affichage de Matrice M1 : \n\n");
                                    AFFICHER3(n1,M);
                                    somm_diag(n1,M);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc17;
                                case 2: //MAT2
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("*************************************************************************");
                                    gotoxy(i,3);printf ("  Ex%ccution Ex 1_2 TP4 calcul somme triangle inf%crieur d'une matrice M1 ",130,130);
                                    gotoxy(i,4);printf ("*************************************************************************");
                                    Sleep(200);
                                    }
                                    getch();

                                    gotoxy(1,5);
                                    printf("Remplissage de Matrice M1 par des entiers quelconques : \n\n");
                                    n1=SAISIE_TAILLE_MATRICE1();
                                    REMPLIR4(n1,M);
                                    printf("Affichage de Matrice M1 : \n\n");
                                    AFFICHER3(n1,M);
                                    somm_diag_inf(n1,M);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc17;
                                case 3: //Retour au menu precedent
                                        goto bloc15;
                            }

                            case 3: //TP4 ex2
                                    textcolor(11);
                                    int i;
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("*************************************************************************");
                                    gotoxy(i,3);printf ("   Ex%ccution d'exercice-2-TP4 : verifier si la matrice M2 est sym%ctrique ",130,130);
                                    gotoxy(i,4);printf ("*************************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    printf("Remplissage de Matrice M2 par des entiers quelconques : \n\n");
                                    n1=SAISIE_TAILLE_MATRICE1();
                                    REMPLIR4(n1,M);
                                    printf("Affichage de Matrice M2 : \n\n");
                                    AFFICHER3(n1,M);
                                    printf("\n\n");
                                    symt_mat(n1,M);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc15;


                            case 4: //TP4 ex3
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("*************************************************************************");
                                    gotoxy(i,3);printf ("    Ex%ccution d'exercice-3-TP4 : Chercher et afficher les COL dans M3 ",130);
                                    gotoxy(i,4);printf ("*************************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    char rep;
                                    if(!verif(nom23))
                                    {
                                    do
                                    {textcolor(14);
                                    printf("La matrice M3 est vide voulez-vous remplir !!! O/N : ");
                                    scanf("%c", &rep);
                                    }
                                    while(toupper(rep)!='O' && toupper(rep)!='N');

                                    if(toupper(rep)=='O')
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom23);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc15;
                                    }
                                    if(toupper(rep)=='N')
                                    {
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc15;
                                    }
                                    }
                                    else
                                    {
                                    printf("\n\nAffichage de Matrice 3 : \n\n");
                                    recuperationMat_affichage(M,"matrice3.txt");
                                    printf("Les points COL : \n\n");
                                    recuperationMat_col(M,"matrice3.txt");
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc15;
                                    }

                            case 5: //ennonce du TP4

                                    textcolor(11);
                                    ShellExecute(NULL,"open","TP4 GI.pdf",NULL,NULL,SW_SHOWNORMAL);
                                    goto bloc15;


                            case 6: //Retour au menu general
                                    goto menu;
                        }


        case 4: //TP5
                    do
                    {
                        bloc4:
                        clrscr();
                        menu_tp5();
                        cadreG();
                        gotoxy(47,19);
                        printf("Donner votre choix SVP:");
                        scanf("%d", &choi2);
                    } while (choi2 <1 || choi2 >5);
                    clrscr();
                    switch(choi2)
                    {
                        case 1: //TP5 remplissage des tableaux
                            do
                            {
                                blocR1:
                                clrscr();
                                menu_remplissage_tp5();
                                cadreG();
                                gotoxy(48,20);
                                printf("Donner votre choix SVP : ");
                                scanf("%d",&choi3);
                            } while( choi3 < 1 || choi3 > 6);
                            clrscr();
                            switch(choi3)
                            {
                                case 1://T13
                                    textcolor(11);
                                    n=recuperation(t,nom13);
                                    clrscr();
                                    int i;
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T13 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T13 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom13);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR1;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom13);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }


                                case 2://T14
                                    textcolor(11);
                                    n=recuperation(t,nom14);
                                    clrscr();
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T14 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);
                                    printf("\n\nTableau T14 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom14);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR1;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom14);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }
                                case 3://T15
                                    textcolor(11);
                                    n=recuperation(t,nom15);
                                    clrscr();
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T15 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {

                                    textattr(14);
                                    printf("\n\nTableau T15 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom15);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR1;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom15);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }


                                case 4://T16
                                    textcolor(11);
                                    n=recuperation(t,nom16);
                                    clrscr();
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T16 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);

                                    printf("\n\nTableau T16 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom16);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR1;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom16);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }


                                case 5://T17
                                    textcolor(11);
                                    n=recuperation(t,nom17);
                                    clrscr();
                                    textattr(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,4); printf("*********************************************************************");
                                    gotoxy(i,5);printf ("           Remplissage du T17 par des entiers quelconques             ");
                                    gotoxy(i,6);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,8);
                                    if (n!=0){
                                    do
                                    {
                                    textattr(14);

                                    printf("\n\nTableau T17 d%cja remplit, voulez vous le remplir de nouveau O/N ? : ",130);
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom17);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }

                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto blocR1;

                                    }
                                    }
                                    else {
                                    int n1=SAISIE_TAILLE();
                                    REMPLIR1(t1,n1);
                                    enregistrement(t1,n1,nom17);
                                    textcolor(11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto blocR1;
                                    }


                                case 6://Retour au TP5
                                    goto bloc4;
                    }

                        case 3: //TP5 ex1 Recherches
                                    do
                                    {
                                        bloc5:
                                        clrscr();
                                        menu_Ex2_tp3();
                                        cadreG();
                                        gotoxy(48,21);
                                        printf("Donner votre choix SVP : ");
                                        scanf("%d",&choi3);
                                    } while( choi3 < 1 || choi3 > 3);
                                clrscr();
                                switch(choi3)
                                {
                                    case 1://Recherche sequentielle
                                            textcolor(11);
                                            n=recuperation(t,nom16);
                                            clrscr();
                                            int i;
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                            textattr(i);
                                            gotoxy(i,2); printf("*********************************************************************");
                                            gotoxy(i,3);printf ("           Exercice 2_1 TP5 Recherche S%cquentielle dans T16                ",130);
                                            gotoxy(i,4);printf ("*********************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,5);
                                            if (n!=0)
                                            {
                                            printf("Affichage de T16 : \n\n");
                                            AFFICHER1(t,n);
                                            int val=SAISIE_VALEUR();
											int pos=rech_seq(t,n,val);
											if (pos!=0)printf("%d se trouve dans T16 a la positin %d",val,pos);
											else printf("%d n'existe pas dans T16 ",val);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();
                                            goto bloc5;
                                            }
                                            else{
                                            do
                                            {
                                    textattr(14);
                                            printf("Tableau T16 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom16);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc5;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc5;
                                            }
                                            }


                                    case 2://Recherche dichotomique

                                            textcolor(11);
                                            n=recuperation(t,nom17);
                                            clrscr();
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                            textattr(i);
                                            gotoxy(i,2); printf("*********************************************************************");
                                            gotoxy(i,3);printf ("           Exercice 2_2 TP5 Recherche Dichotomique dans T17               ");
                                            gotoxy(i,4);printf ("*********************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,5);
                                            textattr(14);
                                            printf("Le principe est le suivant : comparer l'element avec la valeur de la case au milieu du tableau ; \nsi les valeurs sont egales, la tache est accomplie, sinon on recommence dans la moitie du tableau pertinente.\n\n");
                                            textattr(12);
                                            if (n!=0)
                                            {
                                            printf("Affichage de T17 :\n");
                                            AFFICHER1(t,n);
                                            printf("Affichage de T17 apres le TRI: \n\n");
                                            tri_bulles(t,n);
                                            AFFICHER1(t,n);
                                            int val=SAISIE_VALEUR();
											int pos=rech_dicho(t,n,val);
											if (pos!=0)printf("%d se trouve dans T17 a la positin %d",val,pos);
											else printf("%d n'existe pas dans T17 ",val);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();
                                            goto bloc5;
                                            }
                                            else{
                                            do
                                            {
                                    textattr(14);
                                            printf("Tableau T17 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom17);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloc5;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloc5;
                                            }
                                            }


                                    case 3://Retour au menu precedent
                                                goto bloc4;
                                }
                        case 2: //TP5 ex2 TRI
                                    do
                                    {
                                        bloctri:
                                        clrscr();
                                        menu_Ex3_tp3();
                                        cadreG();
                                        gotoxy(48,20);
                                        printf("Donner votre choix SVP : ");
                                        scanf("%d",&choi3);
                                    } while( choi3 < 1 || choi3 > 4);
                                    clrscr();
                                    switch(choi3)
                                    {
                                        case 1: //Tri selection
                                            textcolor(11);
                                            n=recuperation(t,nom13);
                                            clrscr();
                                            int i;
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                            textattr(i);
                                            gotoxy(i,2); printf("*********************************************************************");
                                            gotoxy(i,3);printf ("               Exercice 1_1 TP5 Tri par S%clection du T13                 ",130);
                                            gotoxy(i,4);printf ("*********************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,5);
                                            textattr(14);
                                            printf("Le principe de cette m%cthode est simple. Elle consiste a:\n",130);
                                            printf("Chercher l'indice du plus petit %cl%cment du tableau T13[0..N13] et permuter l'%cl%cment correspondant avec l'%cl%cment d'indice 0\n",130,130,130,130,130,130);
                                            printf("Chercher l'indice du plus petit %cl%cment du tableau T13[1..N13] et permuter l'%cl%cment correspondant avec l'%cl%cment d'indice 1\n",130,130,130,130,130,130);
                                            printf("Chercher l'indice du plus petit %cl%cment du tableau T13[N13-2..N13-1] et permuter l'%cl%cment correspondant avec l'%cl%cment d'indice N13-2\n\n ",130,130,130,130,130,130);
                                            textattr(12);
                                            if (n!=0)
                                            {
                                            printf("Affichage de Tableau T13 avant le tri par selection: ");
                                            AFFICHER1(t,n);
                                            tri_selection(t,n);
                                            printf("Affichage de Tableau T13 apr%cs le tri par selection: ",138);
                                            AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();
                                            goto bloctri;
                                            }
                                            else{
                                            do
                                            {
                                    textattr(14);
                                            printf("Tableau T13 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom13);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloctri;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloctri;
                                            }
                                            }

                                        case 2://Tri a bulle
                                            textcolor(11);
                                            n=recuperation(t,nom14);
                                            clrscr();
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                            textattr(i);
                                            gotoxy(i,2); printf("*********************************************************************");
                                            gotoxy(i,3);printf ("                  Exercice 1_2 TP5 Tri %c Bulle du T14                     ",133);
                                            gotoxy(i,4);printf ("*********************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,5);
                                            textattr(14);
                                            printf("Le principe : En recommen%cant chaque fois au debut du tableau, \non effectue %c plusieurs reprises le traitement suivant : \nOn propage, par permutations successives, le plus grand element du tableau vers la fin du tableau\n ( comme une bulle qui remonte %c la surface d'un liquide ).\n\n",135,133,133);
                                            textattr(12);
                                            if (n!=0)
                                            {
                                            printf("Affichage de Tableau T14 avant le tri %c Bulle: ",133);
                                            AFFICHER1(t,n);
                                            tri_bulles(t,n);
                                            printf("Affichage de Tableau T14 apr%cs le tri %c Bulle: ",138,133);
                                            AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();
                                            goto bloctri;
                                            }
                                            else{
                                            do
                                            {
                                    textattr(14);
                                            printf("Tableau T14 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom14);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloctri;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloctri;
                                            }
                                            }

                                        case 3: //Tri par insertion
                                            textcolor(11);
                                            n=recuperation(t,nom15);
                                            clrscr();
                                            for (i=1;i<8;i++)
                                            {
                                            clrscr();
                                            textattr(i);
                                            gotoxy(i,2); printf("*********************************************************************");
                                            gotoxy(i,3);printf ("               Exercice 1_3 TP5 Tri par Insersion du T15                  ");
                                            gotoxy(i,4);printf ("*********************************************************************");
                                            Sleep(200);
                                            }
                                            getch();
                                            gotoxy(1,5);
                                            textattr(14);
                                            printf("Le principe : Trier le tableau de gauche a droite en ins%crant a chaque fois \nl'%cl%cment I+1 dans le tableau ( d%cja tri%c ) des I pr%cmiers %cl%cments.\n\n",130,130,130,130,130,130,130,130);
                                            textattr(12);
                                            if (n!=0)
                                            {
                                            printf("Affichage de Tableau T15 avant le tri par insertion: ");
                                            AFFICHER1(t,n);
                                            tri_insertion(t,n);
                                            printf("Affichage de Tableau T15 apr%cs le tri par insertion: ",138);
                                            AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();
                                            goto bloctri;
                                            }
                                            else{
                                            do
                                            {
                                    textattr(14);
                                            printf("Tableau T15 est vide !!! voulez vous le remplir O/N ? : ");
                                            scanf("%s", &choi9);
                                            } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                            {
                                            case 'O':
                                            {int n=SAISIE_TAILLE();
                                            REMPLIR1(t,n);
                                            enregistrement(t,n,nom15);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch(); goto bloctri;
                                            }
                                            case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                            getch();goto bloctri;
                                            }
                                            }

                                        case 4: goto bloc4;
                                    }
                        case 4: //ennonce du TP5
                                    textcolor(14);
                                    ShellExecute(NULL,"open","TP5 GI.pdf",NULL,NULL,SW_SHOWNORMAL);
                                    goto bloc4;
                        case 5: //Retour au menu general
                                    goto menu;
                }

            case 5:   //les tableaux
                do
                                {
                                    bloc114:
                                    clrscr();
                                    menu_fichiers1();
                                    cadre_tableau();
                                    gotoxy(48,27);
                                    printf("Donner votre choix SVP : ");
                                    scanf("%d",&choi3);
                                } while( choi3 < 1 || choi3 > 18);
                                clrscr();
                                int i;
                                switch(choi3)
                                {
                                    case 1: //ouverture_fichier(nom1);
                                    n=recuperation(t,nom1);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    int i;
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 1                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {
                                    textattr(14);
                                    printf("Tableau T1 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom1);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 2: //ouverture_fichier(nom2);
                                    n=recuperation(t,nom2);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    int i;
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();

                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 2                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {
                                    textattr(14);
                                    printf("Tableau T2 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom2);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 3://ouverture_fichier(nom3);

                                    n=recuperation(t,nom3);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 3                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {

                                    textattr(14);
                                    printf("Tableau T3 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom3);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 4:// ouverture_fichier(nom4;

                                    n=recuperation(t,nom4);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 4                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T4 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom4);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 5: //ouverture_fichier(nom5);

                                    n=recuperation(t,nom5);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 5                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T5 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom5);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 6:  //ouverture_fichier(nom6);

                                    n=recuperation(t,nom6);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 6                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T6 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom6);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 7: //ouverture_fichier(nom7);

                                    n=recuperation(t,nom7);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 7                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T7 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom7);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 8: //ouverture_fichier(nom8);

                                    n=recuperation(t,nom8);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 8                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T8 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom8);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }

                                    case 9://ouverture_fichier(nom9);
                                    n=recuperation(t,nom9);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 9                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T9 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom9);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 10://ouverture_fichier(nom10);

                                    n=recuperation(t,nom10);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 10                     ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T10 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom10);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 11: //ouverture_fichier(nom11);

                                    n=recuperation(t,nom11);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 11                     ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T11 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {
                                    int n=SAISIE_TAILLE2();
                                    REMPLIR3(t,n);
                                    enregistrement(t,n,nom11);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 12:  //ouverture_fichier(nom12);

                                    n=recuperation(t,nom12);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 12                     ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T12 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE3();
                                    REMPLIR2(t,n);
                                    enregistrement(t,n,nom12);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 13: //ouverture_fichier(nom13);

                                    n=recuperation(t,nom13);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 13                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T13 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom13);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 14:  //ouverture_fichier(nom14);

                                    n=recuperation(t,nom14);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 14                     ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T14 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom14);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 15: //ouverture_fichier(nom15);

                                    n=recuperation(t,nom15);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 15                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T15 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom15);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 16: //ouverture_fichier(nom16);

                                    n=recuperation(t,nom16);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 16                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T16 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom16);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 17://ouverture_fichier(nom17);

                                    n=recuperation(t,nom17);
                                    clrscr();
                                    if (n!=0)
                                    {
                                    textcolor(11);
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);textattr(i);printf ("                         Affichage du Tableau 17                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);

                                    AFFICHER1(t,n);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();
                                    goto bloc114;
                                    }
                                    else{
                                    do
                                    {textattr(14);
                                    printf("Tableau T17 est vide !!! voulez vous le remplir O/N ? : ");
                                    scanf("%s", &choi9);
                                    } while(!((choi9 !='o') || (choi9!='n')));
                                    switch (toupper(choi9))
                                    {
                                    case 'O':
                                    {int n=SAISIE_TAILLE();
                                    REMPLIR1(t,n);
                                    enregistrement(t,n,nom17);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc114;
                                    }
                                    case 'N':
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch();goto bloc114;
                                    }
                                    }
                                    case 18:  //Retour au menu general
                                    goto menu;

                                }


            case 6: //Les matrices

                do
                                {
                                    bloc1144:
                                    clrscr();
                                    menu_mat();
                                    cadreG();
                                    gotoxy(46,18);
                                    printf("Donner votre choix SVP : ");
                                    scanf("%d",&choi3);
                                } while( choi3 < 1 || choi3 > 18);
                                clrscr();
                                switch(choi3)
                                {
                                    case 1: //ouverture_fichier(nom1);
                                    clrscr();
                                    int i;
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);printf ("                         Affichage du Matrice 1                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    char rep;
                                    if(!verif(nom21))
                                    {
                                    do
                                    {textcolor(14);
                                    printf("La matrice 1 est vide voulez-vous remplir !!! O/N : ");
                                    scanf("%c", &rep);
                                    }
                                    while(toupper(rep)!='O' && toupper(rep)!='N');

                                    if(toupper(rep)=='O')
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom21);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }
                                    if(toupper(rep)=='N')
                                    {
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }
                                    }
                                    else
                                    {textcolor(14);
                                    printf("\n\nR%ccup%cration de Matrice 1 : \n\n",130,130);
                                    recuperationMat_affichage(M,"matrice1.txt");
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }

                            case 2:
                                    clrscr();
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);printf ("                         Affichage du Matrice 2                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    if(!verif(nom22))
                                    {
                                    do
                                    {textcolor(14);
                                    printf("La matrice 2 est vide voulez-vous remplir !!! O/N : ");
                                    scanf("%c", &rep);
                                    }
                                    while(toupper(rep)!='O' && toupper(rep)!='N');

                                    if(toupper(rep)=='O')
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom22);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }
                                    if(toupper(rep)=='N')
                                    {
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }
                                    }
                                    else
                                    {textcolor(14);
                                    printf("\n\nR%ccup%cration de Matrice 2 : \n\n",130,130);
                                    recuperationMat_affichage(M,"matrice2.txt");
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }

                            case 3: //matrice 3

                                    clrscr();
                                    for (i=1;i<8;i++)
                                    {
                                    clrscr();
                                    textattr(i);
                                    gotoxy(i,2); printf("*********************************************************************");
                                    gotoxy(i,3);printf ("                         Affichage du Matrice 3                      ");
                                    gotoxy(i,4);printf ("*********************************************************************");
                                    Sleep(200);
                                    }
                                    getch();
                                    gotoxy(1,5);
                                    if(!verif(nom23))
                                    {
                                    do
                                    {textcolor(14);
                                    printf("La matrice 3 est vide voulez-vous remplir !!! O/N : ");
                                    scanf("%c", &rep);
                                    }
                                    while(toupper(rep)!='O' && toupper(rep)!='N');

                                    if(toupper(rep)=='O')
                                    {
                                    int l=SAISIE_TAILLE_MATRICE_L();
                                    int c=SAISIE_TAILLE_MATRICE_C();
                                    REMPLIR5(l,c,M);
                                    enregistrementMat(M,l,c,nom23);
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }
                                    if(toupper(rep)=='N')
                                    {
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }
                                    }
                                    else
                                    {textcolor(14);
                                    printf("\n\nR%ccup%cration de Matrice 3 : \n\n",130,130);
                                    recuperationMat_affichage(M,"matrice3.txt");
                                    printf("\n\n\n\t\t\t");printf("Appuyer sur une touche pour revenir au menu pr%cc%cdent",130,130);
                                    getch(); goto bloc1144;
                                    }
                            case 4: goto menu;


                        }

            case 7: //ennonce du mini projet

                            textcolor(14);

                            ShellExecute(NULL,"open","Projet.pdf",NULL,NULL,SW_SHOWNORMAL);

                            goto menu;

                ////////////////////////////////////////////////////////////////////////////////
            case 8:
                                do
                    {
                            jeux:
                            clrscr();
                            games();
                            cadreG();
                            gotoxy(48,23);
                            printf("Donner votre choix SVP : ");
                            scanf("%d", &choigame);
                    } while (choigame <1 || choigame >4);
                    clrscr();
                    switch(choigame)
                    {
                        case 1:ShellExecute(NULL,"open","ok",NULL,NULL,SW_SHOWNORMAL);goto jeux;
                        case 2:ShellExecute(NULL,"open","mm",NULL,NULL,SW_SHOWNORMAL);goto jeux;
                        case 3:ShellExecute(NULL,"open","typing game",NULL,NULL,SW_SHOWNORMAL);goto jeux;
                        case 4:goto menu;
                    }





            case 9: //deconnexion
                            textattr(11);
                            printf("\nMini_Projet:Application de gestion des TPs. C: \n\n");
                            printf("R%calise par: ",130);
                            printf("MIGHRI Radhi (3INFO) & ZORGATI Rhayem (3I-G).");
                            gotoxy(7,7);
                            printf("Sous Direction de Mr.BEN SALAH Kais\n");
                            gotoxy(7,9);
                            printf("Polytechnique Sousse 2018/2019");
                            gotoxy(7,12);
                            textcolor(11);
                            clrscr();
                            printf("\nMini_Projet:Application de gestion des TPs. C: \n\n");
                            printf("Realise par: ");
                            printf("MIGHRI Radhi (3INFO) & ZORGATI Abderrahmenne (3I-G).");
                            gotoxy(7,7);
                            printf("Sous la Direction de Mr.BEN SALAH Kais \n");
                            gotoxy(7,9);
                            printf("Polytechnique Sousse 2018/2019");
                            gotoxy(7,14);
                            Sleep(2000);
                            gotoxy(7,24);printf("Copyrights reserved 2019.");getch();

                            for (i=1;i<16;i++)
                            {
                            clrscr();
                            textattr(i);
                            gotoxy(i, 17);
                            printf("***********************************************************");
                            gotoxy(i, 18);
                            printf("\6                                                         \6");
                            gotoxy(i, 19);
                            printf("\6         \3 \3 \3---Thank you & & Good Bye---\3 \3 \3          \6");
                            gotoxy(i, 20);
                            printf("\6                                                         \6");
                            gotoxy(i, 21);
                            printf("***********************************************************");
                            Sleep(200);

                            }
                            getch();
                            goto authentfi;


    /*int w= 20;
    int z = 200000000;
    int a = 20;//
    int m;
//creates walking people
    while(a != -1){
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    if(a !=0){
    printf(" o");//1
    for(m=0; m<=a; m++){printf(" ");}// the distance
    if(a%2 == 0)
    printf("   o");
    else
    printf("  o");

    printf("\n/|\\");//1
    for(m=0; m<=a; m++){printf(" ");}// the distance
    if(a%2 ==0)
    printf("o/|\\");
    else
    printf("/|\\");

    printf("\n/\\");//1
    for(m=0; m<=a; m++){printf(" ");}
    if(a%2 == 0)
    printf("  /\\");
    else
    printf(" o/\\");

    }// end creating walking people
    else
    {
        printf(" o");printf("    o");
        printf("\n/|\\");printf("<3/|\\");
        printf("\n/\\"); printf("   /\\");

    while(z!= 0){ z--;}// wasting time
    z=2000000000;
    }


    while(z!= 0){ z--;}// wasting time
    z=200000000;
    system("cls");
    a--;
    }
    system("pause");*/


    // exit(0);

        }


   // } while (choi1 != 9);
}
