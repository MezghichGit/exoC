#include <stdio.h>	/*Directives du pr�processeur*/
#define TAUX 2.063

//float convert(float euro);	//D�clarations des fonctions

main() //Programme principal
{

    char x ='a';

    x = x + 2; // ici on consid�re le code ASCII ; a son code ASCII est 97
    printf("valeur de x = %d\n",x); //99
    printf("valeur de x = %c\n",x); // c : le caract�re qui correspond au code ASCII 99


/*
    int tab[3];
    int *ptr;
    int x = 100;

    tab[0]=10;
    tab[1]=20;
    tab[2]=30;

    ptr = &x;
    printf("valeur de x = %d\n",*ptr);

    ptr = tab+2;
    printf("valeur de la premi�re case = %d\n",*ptr);*/
    /*
    printf("premiere case = %d\n",tab[0]);
    printf("adresse de la premiere case = %x\n",tab);

    printf("adresse de la deuxi�me case = %x\n",tab+1);

     printf("adresse de la troisi�me case = %x\n",tab+2);*/
    /*
    int b = 10;

    int *ptr = &b;

    printf("Adresse de b = %x \n", &b);
    printf("valeur de ptr = %x \n", ptr);


    printf("valeur de b = %d \n", b);
    printf("valeur de *ptr = %d \n", *ptr);

    *ptr = 20;

    printf("valeur de b = %d \n", b);
    */
    /*float somme;
    printf("Somme � convertir (en euros) : "); // � l'ex�cution on va mettre les instruction de printf
    scanf("%f", &somme);  // lecture dans la variable somme

    printf("%0.2f euros = %0.2f dinars", somme, convert(somme));*/
}
/*
float convert(float euro)	//D�finitions des fonctions
{
    return(euro*TAUX);
}*/
