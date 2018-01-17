#ifndef  enfant_h
#define enfant_h
 #include <stdio.h>
 #include <string.h>

struct date {
           char jour[20];
	char mois[20];
       char annee[20];
};
typedef struct date date;  



struct enfant {
       char Nom[20];
	char Prenom[20];
        date d;   
	char adresse[20];
	char type_regime[20];
        char classe[20];
         char CIN_parent[20];
        char ID_b[20];
	char maladie[20];
        char nom_med[20];
         char fois[20];
};
typedef struct enfant enfant ;

enfant rechercher_enfant(char chemin[], enfant e);
void ajouter_enfant(char chemin[], enfant e);
int supprimer_enfant(char chemin[], char nom[], char prenom[]);


#endif
