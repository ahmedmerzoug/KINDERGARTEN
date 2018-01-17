#ifndef  envoyer_parent_h
#define envoyer_parent_h
 #include <stdio.h>
 #include <string.h>

struct envoyer_parent {
           char destinateur[20];
	   char id_b[20];
         char id_des[20];
           char type[20];
	  char remarque[20];
};
typedef struct envoyer_parent envoyer_parent;  

envoyer_parent rechercher_evoyyer(char chemin[],envoyer_parent p);
#endif
