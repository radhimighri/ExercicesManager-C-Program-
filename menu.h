#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
void cadreG()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0; i<41; i++)
        printf("\4");
    gotoxy(41,6);
    for(i=0; i<39; i++)
        printf("\4");
    for (i=3; i<=16; i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for (i=3; i<=16; i++)
    {
        gotoxy(80,i);
        printf("\4");
    }
    gotoxy(40,17);
    for(i=0; i<41; i++)
        printf("\4");
    textcolor(15);
}
void cadreTp1()
{
     int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0;i<41;i++)
        printf("\4");
    gotoxy(41,6);
    for(i=0;i<39;i++)
        printf("\4");
    for(i=3;i<19;i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for(i=3;i<19;i++)
    {
        gotoxy(80,i);
        printf("\4");
    }
    gotoxy(40,19);
    for(i=0;i<41;i++)
        printf("\4");
    textcolor(15);
}
                /*Menu cadre TP1 exercice 1*/
void cadre_exercice1_tp1()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0;i<41;i++)
        printf("\4");
    gotoxy(41,6);
    for(i=0;i<39;i++)
        printf("\4");
    for(i=3;i<20;i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for(i=3;i<20;i++)
    {
        gotoxy(80,i);
        printf("\4");
    }
    gotoxy(40,20);
    for(i=0;i<41;i++)
        printf("\4");
    textcolor(15);
}

/**********/
void cadreEx3_tp3()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0;i<41;i++)
        printf("\4");
    gotoxy(41,6);
    for(i=0;i<39;i++)
        printf("\4");
    for(i=3;i<13;i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for(i=3;i<13;i++)
    {
        gotoxy(80,i);
        printf("\4");
    }
    gotoxy(40,13);
    for(i=0;i<41;i++)
        printf("\4");
    textcolor(15);
}

void cadreEx4_tp3()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0; i<42; i++)
        printf("\4");
    gotoxy(40,6);
    for(i=0; i<41; i++)
        printf("\4");
    for (i=3; i<=16; i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for (i=3; i<=16; i++)
    {
        gotoxy(81,i);
        printf("\4");
    }
    gotoxy(40,16);
    for(i=0; i<41; i++)
        printf("\4");
    textcolor(15);
}

void cadre_tp3()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0;i<41;i++)
        printf("\4");
    gotoxy(41,6);
    for(i=0;i<39;i++)
        printf("\4");
    for(i=3;i<21;i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for(i=3;i<21;i++)
    {
        gotoxy(80,i);
        printf("\4");
    }
    gotoxy(40,21);
    for(i=0;i<41;i++)
        printf("\4");
    textcolor(15);
}
void  cadreRempli_tp3()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0;i<41;i++)
        printf("\4");
    gotoxy(41,6);
    for(i=0;i<39;i++)
        printf("\4");
    for(i=3;i<27;i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for(i=3;i<27;i++)
    {
        gotoxy(80,i);
        printf("\4");
    }
    gotoxy(40,27);
    for(i=0;i<41;i++)
        printf("\4");
    textcolor(15);
}
void cadreTp4()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0;i<43;i++)
        printf("\4");
    gotoxy(40,6);
    for(i=0;i<42;i++)
        printf("\4");
    for(i=3;i<15;i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for(i=3;i<16;i++)
    {
        gotoxy(82,i);
        printf("\4");
    }
    gotoxy(40,15);
    for(i=0;i<42;i++)
        printf("\4");
    textcolor(15);
}

void cadre_RempliTP4()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0;i<43;i++)
        printf("\4");
    gotoxy(40,6);
    for(i=0;i<43;i++)
        printf("\4");
    for(i=3;i<19;i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for(i=3;i<19;i++)
    {
        gotoxy(82,i);
        printf("\4");
    }
    gotoxy(40,19);
    for(i=0;i<43;i++)
        printf("\4");
    textcolor(15);
}

void cadre_tableau()
{
    int i;
    textcolor(15);
    gotoxy(40,2);
    for(i=0; i<41; i++)
        printf("\4");
    gotoxy(41,6);
    for(i=0; i<39; i++)
        printf("\4");
    for (i=3; i<=26; i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for (i=3; i<=26; i++)
    {
        gotoxy(80,i);
        printf("\4");
    }
    gotoxy(40,26);
    for(i=0;i<41;i++)
        printf("\4");
    textcolor(15);
}


void cadreauth()
{
    int i;
    textcolor(15);
    gotoxy(1,2);
    for(i=0; i<107; i++)
        printf("\4");
    gotoxy(1,6);
    for(i=0; i<107; i++)
        printf("\4");
    /*for (i=3; i<=16; i++)
    {
        gotoxy(40,i);
        printf("\4");
    }
    for (i=3; i<=16; i++)
    {
        gotoxy(80,i);
        printf("\4");
    }*/
   gotoxy(1,22);
    for(i=0; i<107; i++)
        printf("\4");
    textcolor(15);
}

///////////////////////////////////////////////////////

void menuG()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU G%cN%cRAL \n",144,144);
    textcolor(11);
    gotoxy(50,8);   printf("(1) Travaux pratique 2 %c",175);
    gotoxy(50,9);   printf("(2) Travaux pratique 3 %c",175);
    gotoxy(50,10); printf("(3) Travaux pratique 4 %c",175);
    gotoxy(50,11); printf("(4) Travaux pratique 5 %c",175);
    gotoxy(50,12); printf("(5) Les tableaux %c",175);
    gotoxy(50,13); printf("(6) Les matrices %c",175);
    gotoxy(50,14);printf("(7) %cnnonce du mini projet ",144);
    gotoxy(50,15); printf("(8) Games: Loisirs %c",175);
    gotoxy(50,16);printf("(9) D%cconnexion",130);
}


void games()
{
gotoxy(56,4);
textcolor(11);printf("Un peu de plaisirs");
textcolor(11);
gotoxy(50,8);printf("(1) Snake");
gotoxy(50,9);printf("(2) Tic Tac Toe");
gotoxy(50,10);printf("(3) Speed-Test");
gotoxy(50,11);printf("(4) Retourner au menu G%cn%cral\n\n\n\n\n\n\n\n",130,130);

}



void TP2_EX1()
{
gotoxy(56,4);
textcolor(11);printf("MENU TP2  Exercice 1");
textcolor(11);
gotoxy(50,8);printf("(1) Probleme1 :Carr%c",130);
gotoxy(50,9);printf("(2) Probleme2 :Multiparfait");
gotoxy(50,10);printf("(3) Probleme3 :Division par 13");
gotoxy(50,11);printf("(4) Retourner au menu TP2\n\n\n\n\n\n\n\n",130,130);

}





void authentif()
{
gotoxy(1,4);
textcolor(12);printf("Authentification Administrateur : ");
gotoxy(1,8);printf("Veuillez saisir votre identifiant et mot de passe pour acc%cder au menu de gestion des TPs C: \n\n ",130);
}



void menu_tp1()
{
    gotoxy(56,4);
    textcolor(11);
    printf("MENU TP2");
    textcolor(11);
    gotoxy(50,8);printf("(1) Exercice 1 %c",175);
    gotoxy(50,9);printf("(2) Exercice 2 ");
    gotoxy(50,10);printf("(3) %cnnonce du TP2",144);
    gotoxy(50,11);printf("(4) Retourner au menu g%cn%cral",130,130);
}


void menu_tp1_ex7()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU EXERCICE 7 TP1");
    textcolor(11);
    gotoxy(50,8);printf("(1) Probl%cme 1 ",138);
    gotoxy(50,9);printf("(2) Probl%cme 2 ",138);
    gotoxy(50,10);printf("(3) Probl%cme 3 ",138);
    gotoxy(50,12);printf("(4) Retourner au menu TP2");
}

void menu_tp2()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU TP3");
    textcolor(11);
    gotoxy(45,8);   printf("(1)  Remplissage %c",175);
    gotoxy(45,9);   printf("(2)  Exercice 1  %c",175);
    gotoxy(45,10); printf("(3)  Exercice 2  %c",175);
    gotoxy(45,11); printf("(4)  Exercice 3  ");
    gotoxy(45,12); printf("(5)  Exercice 4");
    //gotoxy(45,13);printf("(6) Contenu des fichiers %c",175);
    gotoxy(45,13);printf("(6)  %cnnonc%c du TP3",144,130);
    gotoxy(45,14);printf("(7)  Retourner au menu g%cn%cral",130,130);
}


// les sous  menu du tp2 et leurs cadre
void menu_remplissage_tp2()
{

    gotoxy(50,4);
    textcolor(11);
    printf("MENU REMPLISSAGE TP3");
    textcolor(11);
    gotoxy(50,8); printf("(1)  Remplissage T1");
    gotoxy(50,9); printf("(2)  Remplissage T2");
    gotoxy(50,10);printf("(3)  Remplissage T3");
    gotoxy(50,11);printf("(4)  Remplissage T4");
    gotoxy(50,12);printf("(5)  Remplissage T5");
    gotoxy(50,13);printf("(6)  Remplissage T6");
    gotoxy(50,14);printf("(7)  Remplissage T7");
    gotoxy(50,15);printf("(8)  Remplissage T8");
    gotoxy(50,16);printf("(9)  Remplissage T9");
    gotoxy(50,17);printf("(10) Remplissage T10");
    gotoxy(50,18);printf("(11) Remplissage T11");
    gotoxy(50,19);printf("(12) Remplissage T12");
    //gotoxy(50,20);printf("(14) Remplissage MAT1");
    //gotoxy(50,21); printf("(15) Remplissage MAT2");
    //gotoxy(50,22);printf("(16) Remplissage MAT3");
    gotoxy(50,20);printf("(13) Retourner au menu TP3");
}

void menu_Ex2_tp2()
{

    gotoxy(54,4);
    textcolor(11);
    printf("MENU EXERCICE 1 TP3 ");
    textcolor(11);
    gotoxy(50,8);  printf("(1) Transfert ");
    gotoxy(50,9);  printf("(2) Sym%ctrique ",130);
    gotoxy(50,10); printf("(3) Inversion ");
    gotoxy(50,11); printf("(4) Rotation_K ");
    gotoxy(50,12); printf("(5) Insertion ");
    gotoxy(50,13); printf("(6) Pr%csents ",130);
    gotoxy(50,14); printf("(7) Absents ");
    gotoxy(50,15); printf("(8) Retourner au menu TP3");
}

void menu_Ex3_tp2()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU EXERCICE 3");
    textcolor(11);
    gotoxy(50,8); printf("(1) Pr%csent ",130);
    gotoxy(50,9); printf("(2) Absent ");
    gotoxy(50,11); printf("(3) Retourner au menu TP3 ");
}

void menu_Ex4_tp2()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU EXERCICE 2 TP3");
    textcolor(11);
    gotoxy(48,8); printf("(1) Recherche %cl%cment Sup%crieur ",130,130,130);
    gotoxy(48,9); printf("(2) Recherche %cl%cment fr%cquent ",130,130,130);
    gotoxy(48,10);printf("(3) Recherche plus long plateau ");
    gotoxy(48,11);printf("(4) Retourner au menu TP3 ");
}
void menu_fichiers1()
{
    gotoxy(50,4);
    textcolor(11);
    printf("MENU Tableaux");
    textcolor(11);
    gotoxy(50,8); printf("(1)  TABLEAU 1 ");
    gotoxy(50,9); printf("(2)  TABLEAU 2 ");
    gotoxy(50,10);printf("(3)  TABLEAU 3 ");
    gotoxy(50,11);printf("(4)  TABLEAU 4 ");
    gotoxy(50,12);printf("(5)  TABLEAU 5");
    gotoxy(50,13);printf("(6)  TABLEAU 6");
    gotoxy(50,14);printf("(7)  TABLEAU 7");
    gotoxy(50,15);printf("(8)  TABLEAU 8");
    gotoxy(50,16);printf("(9)  TABLEAU 9");
    gotoxy(50,17);printf("(10) TABLEAU 10");
    gotoxy(50,18);printf("(11) TABLEAU 11");
    gotoxy(50,19);printf("(12) TABLEAU 12");
    gotoxy(50,20);printf("(13) TABLEAU 13");
    gotoxy(50,21);printf("(14) TABLEAU 14 ");
    gotoxy(50,22);printf("(15) TABLEAU 15 ");
    gotoxy(50,23);printf("(16) TABLEAU 16 ");
    gotoxy(50,24);printf("(17) TABLEAU 17 ");
    gotoxy(50,25);printf("(18) Retourner au menu g%cn%cral",130,130);

}

//fin sous menu tp3

void menu_tp3()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU TP4");
    textcolor(11);
    gotoxy(50,8);  printf("(1) Remplissage   %c",175);
    gotoxy(50,9);  printf("(2) Exercice 1    %c",175);
    gotoxy(50,10);printf("(3) Exercice 2 ");
    gotoxy(50,11);printf("(4) Exercice 3 ");
    //gotoxy(50,11);printf("(4) Contenu des fichiers %c",175);
    gotoxy(50,12);printf("(5) %cnnonc%c du TP4",144,130);
    gotoxy(50,13);printf("(6) Retourner au menu g%cn%cral",130,130);
}


void menu_Ex2_tp3()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU Recherche TP5");
    textcolor(11);
    gotoxy(50,8); printf("(1) Recherche S%cquentielle ",130);
    gotoxy(50,9); printf("(2) Recherche Dichotomique ");
    gotoxy(50,10);printf("(3) Retourner au menu TP5 ");
}

void menu_Ex3_tp3()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU TRI TP5");
    textcolor(11);
    gotoxy(50,8); printf("(1) Tri par seclection ");
    gotoxy(50,9); printf("(2) Tri %c Bulle ",133);
    gotoxy(50,10); printf("(3) Tri par insertion ");
    //gotoxy(50,11);  printf("(4) Tri par d%cnombrement ",130);
    //gotoxy(50,12);  printf("(5) Tri par remplacement ");
    gotoxy(50,11);  printf("(4) Retourner au menu TP5 ");
}

void menu_fichiers2()
{
    gotoxy(50,4);
    textcolor(11);
    printf("MENU FICHIERS TP4");
    textcolor(11);
    gotoxy(50,8);   printf("(1) Fichier TAB14 ");
    gotoxy(50,9);   printf("(2) Fichier TAB15 ");
    gotoxy(50,10) ; printf("(3) Fichier TAB16 ");
    gotoxy(50,11);  printf("(4) Fichier TAB17 ");
    gotoxy(50,12);  printf("(5) Fichier TAB18 ");
    gotoxy(50,13);  printf("(6) Fichier TAB19 ");
    gotoxy(50,14);  printf("(7) Fichier TAB20 ");
    gotoxy(50,15);  printf("(8) Retourner au menu TP4");
}
//fin sous menu
void menu_tp5(){

    gotoxy(54,4);
    textcolor(11);
    printf("MENU TP5");
    textcolor(11);
    gotoxy(50,8);    printf("(1) Remplissage %c",175);
    gotoxy(50,9);    printf("(2) Exercice 1 : TRI %c",175);
    gotoxy(50,10);   printf("(3) Exercice 2 : Rech %c",175);
    gotoxy(50,11);   printf("(4) %cnnonc%c du TP5",144,130);
    gotoxy(50,12);   printf("(5) Retourner au menu g%cn%cral",130,130);
}


void menu_mat()
{
    gotoxy(54,4);
    textcolor(11);
    printf("MENU Matrices");
    textcolor(11);
    gotoxy(50,8);printf("(1) Matrice 1 ");
    gotoxy(50,9);printf("(2) Matrice 2 ");
    gotoxy(50,10);printf("(3) Matrice 3");
    gotoxy(50,11);printf("(4) Retourner au menu g%cn%cral",130,130);
}



//Sous menu tp4
void menu_remplissage_mat()
{
    gotoxy(50,4);
    textcolor(11);
    printf("MENU REMPLISSAGE TP4");
    textcolor(11);
    gotoxy(50,8);   printf("(1) Remplissage MAT1 ");
    gotoxy(50,9);   printf("(2) Remplissage MAT2 ");
    gotoxy(50,10) ; printf("(3) Remplissage MAT3 ");
    /*gotoxy(50,11);  printf("(4) Remplissage T17 ");
    gotoxy(50,12);  printf("(5) Remplissage T18 ");
    gotoxy(50,13);  printf("(6) Remplissage T19 ");
    gotoxy(50,14);  printf("(7) Remplissage T20 ");*/
    gotoxy(50,11);  printf("(4) Retourner au menu TP4");
}

void menu_ex1_tp4()
{
    gotoxy(50,4);
    textcolor(11);
    printf("MENU exercice 1 TP4");
    textcolor(11);
    gotoxy(50,8);   printf("(1) Somme Diagonale ");
    gotoxy(50,9);   printf("(2) Somme triangle inferi%cur ",130);
    gotoxy(50,10);  printf("(3) Retourner au menu TP4");
}




void menu_remplissage_tp5()
{
    gotoxy(50,4);
    textcolor(11);
    printf("MENU REMPLISSAGE TP5");
    textcolor(11);
    gotoxy(50,8);   printf("(1) Remplissage T13 ");
    gotoxy(50,9);   printf("(2) Remplissage T14 ");
    gotoxy(50,10);  printf("(3) Remplissage T15 ");
    gotoxy(50,11) ; printf("(4) Remplissage T16 ");
    gotoxy(50,12);  printf("(5) Remplissage T17 ");
    gotoxy(50,13);  printf("(6) Retourner au menu TP5");
}


#endif // MENU_H_INCLUDED
