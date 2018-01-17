#ifndef  classe_h
#define classe_h
 #include <stdio.h>
 #include <string.h>


struct classe {
       char Niveau[20];
	char Nom_classe[20];
       char CIN_maitresse[20];   
	char CIN_aide[20];
	char capacite[20];
        char ID_camera[20];
};
typedef struct classe classe ;

classe rechercher_classe(char chemin[], classe c);
void ajouter_classe(char chemin[], classe c);
int supprimer_classe(char chemin[], char nom[]);

#endif
