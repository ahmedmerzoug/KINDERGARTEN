#ifndef  maitresse_h
#define maitresse_h
 #include <stdio.h>
 #include <string.h>


struct maitresse {
       char Nom[20];
	char Prenom[20];
       char CIN[20];   
	char email[20];
	char tel[20];
        char adresse[20];
         char classe[20];
};
typedef struct maitresse maitresse ;

maitresse rechercher_maitresse(char chemin[], maitresse ma);
void ajouter_maitresse(char chemin[], maitresse ma);
int supprimer_maitresse(char chemin[], char nom[], char prenom[]);

#endif
