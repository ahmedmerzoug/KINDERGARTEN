#ifndef  tech_h
#define tech_h
 #include <stdio.h>
 #include <string.h>


struct tech {
       char Nom[20];
	char Prenom[20];
       char CIN[20];   
	char email[20];
	char tel[20];
        char adresse[20];
         
};
typedef struct tech tech ;

tech rechercher_tech(char chemin[], tech t);
void ajouter_tech(char chemin[], tech t);
int supprimer_tech(char chemin[], char Nom[], char Prenom[]);

#endif
