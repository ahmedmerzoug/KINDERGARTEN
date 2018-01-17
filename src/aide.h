#ifndef  aide_h
#define aide_h
 #include <stdio.h>
 #include <string.h>


struct aide {
       char Nom[20];
	char Prenom[20];
       char CIN[20];   
	char email[20];
	char tel[20];
        char adresse[20];
         char classe[20];
};
typedef struct aide aide ;

aide rechercher_aide(char chemin[], aide a);
void ajouter_aide(char chemin[], aide a);
int supprimer_aide(char chemin[], char nom[], char prenom[]);

#endif
