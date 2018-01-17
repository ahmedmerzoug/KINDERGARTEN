#ifndef  parent_h
#define parent_h
 #include <stdio.h>
 #include <string.h>



struct parent {
       char Nom[20];
	char Prenom[20];
	char CIN[20];
	char email[50];
        char adresse[20];
         char profession[20];
        char tel[20];
	char nombre[20];
};
typedef struct parent parent ;

parent rechercher_parent(char chemin[], parent pp);
void ajouter_parent(char chemin[],parent pp);
int supprimer_parent(char chemin[], char nom[], char prenom[]);



parent rechercher_parent_CIN(char chemin[], parent p);

#endif
