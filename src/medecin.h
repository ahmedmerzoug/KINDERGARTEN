#ifndef  medecin_h
#define medecin_h
 #include <stdio.h>
 #include <string.h>


struct medecin {
       char Nom[20];
	char Prenom[20];
       char CIN[20];   
	char email[20];
	char adresse[20];
        char tel[20];
};
typedef struct medecin medecin ;

medecin rechercher_medecin(char chemin[], medecin M);
void ajouter_medecin(char chemin[], medecin M);
int supprimer_medecin(char chemin[], char nom[], char prenom[]);

#endif
