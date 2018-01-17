#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "envoyer_parent.h"
#include "enfant.h"

envoyer_parent rechercher_evoyyer(char chemin[],envoyer_parent p)
{
envoyer_parent me,dd;

FILE *A;
strcpy(dd.id_b,"-1");

A=fopen(chemin,"r+");
  
while(fscanf(A, "%s %s %s %s %s \n",me.destinateur,me.id_b,me.id_des,me.type,me.remarque)!=EOF )
{
if((strcmp(p.id_b,me.id_b)==0)) 	
{
dd=me ;
}
}
fclose(A);
return dd ;
}
