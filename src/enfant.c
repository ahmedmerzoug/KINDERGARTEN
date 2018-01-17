#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "enfant.h"

void ajouter_enfant(char chemin[], enfant e)
{
    FILE *f;

    f=fopen(chemin,"a");

fprintf(f, "%s %s %s %s %s %s %s %s %s %s %s %s %s\n",e.Nom,e.Prenom,e.d.jour,e.d.mois,e.d.annee,e.adresse,e.type_regime,e.classe,e.CIN_parent,e.ID_b,e.maladie,e.nom_med,e.fois);
fclose(f);
}


enfant rechercher_enfant(char chemin[], enfant e)
{
enfant me,dd;
date a;
FILE *A;
strcpy(dd.Nom,"-1");
strcpy(dd.Prenom,"-1");
A=fopen(chemin,"r+");
  
while(fscanf(A, "%s %s %s %s %s %s %s %s %s %s %s %s %s \n",me.Nom,me.Prenom,me.d.jour,me.d.mois,me.d.annee,me.adresse,me.type_regime,me.classe,me.CIN_parent,me.ID_b,me.maladie,me.nom_med,me.fois   )!=EOF )
{
if(((strcmp(e.Nom,me.Nom)==0)) && ((strcmp(e.Prenom,me.Prenom)==0)))	
{
dd=me ;
}
}
fclose(A);
return dd ;
}

