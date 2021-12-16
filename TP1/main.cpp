#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
/* calcul de la surface d’un cercle */

#define pi 3.14
float d,c;
enum Sexe {HOMME, FEMME} sexe;
main()
{
    int n=8, m=5, p=3;
    const int * N = &n; //pointeur sur entier constant  int * const M = &m;
    N=&m;

    int x,y;
    void fonction(int, int=0, int=1);

    sexe = FEMME;
    //sexe = 1;
    char code = sexe + 5;
    printf("code= %d\n", sexe);
	float rayon, surface;
	double calcul(double rayon);
	printf("Donner un rayon: ");
	//scanf("%c",&rayon);
	scanf("%f",&rayon);
	surface=calcul(rayon);
	printf("Surface= %.2f\n", surface);

	fonction(y);	// fonction(y,0,1);
	fonction(2,x);	// fonction(2,x,1);
	fonction(x,y,x+y);	// ok, 3 arguments

/*
	d=2.0;
	c=pi*d;
	puts("bonjour a tous\n");
	printf("la circonference est %f m\n",c);*/

}

 void fonction(int, int=0, int=1){}
/* définition de fonction */
double calcul(double r)
{
	/*définition de la variable locale */
	double a=PI*r*r;
	return(a);
}
