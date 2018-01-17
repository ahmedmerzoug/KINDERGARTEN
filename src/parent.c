
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "parent.h"




void ajouter_parent(char chemin[],parent pp)
{

    FILE *f;

    f=fopen(chemin,"a");

fprintf(f, "%s %s %s %s %s %s %s %s\n",pp.Nom,pp.Prenom,pp.CIN,pp.email,pp.adresse,pp.profession,pp.tel,pp.nombre);
fclose(f);
}

///////////////////rechercher avant l'ajout avec 	CIN //////////////////////
parent rechercher_parent_CIN(char chemin[], parent pp)
{

parent me,dd;
FILE *f;
strcpy(dd.CIN,"-1");

f=fopen(chemin,"r+");
  
while(fscanf(f, "%s %s %s %s %s %s %s %s \n",me.Nom,me.Prenom,me.CIN,me.email,me.adresse,me.profession,me.tel,me.nombre)!=EOF )
{
if(strcmp(pp.CIN,me.CIN)==0)	
{
dd=me ;
}
}
fclose(f);
return dd ;
}

////////////////////////////          fonction supprimer //////////////////////////////////////////////////////////////////////
int supprimer_parent(char chemin[], char nom[], char prenom[])
{
 int y=0;
 int i=0,n=0;
 parent N[80];
    FILE *f;

    f=fopen(chemin,"r");
    if(f==NULL)
    {
    printf("erreur");
    return;
    }
	else
	{
	//remplir le tableau Age par la structure N
	while(fscanf(f,"%s %s %s %s %s %s %s %s \n", N[n].Nom, N[n].Prenom, N[n].CIN,N[n].email, N[n].adresse,N[n].profession,N[n].tel, N[n].nombre) !=EOF)
	{
		if((strcmp(nom,N[n].Nom) ==0) && (strcmp(prenom,N[n].Prenom) ==0))
			{i=n;
			y=1;}
	n++;
	}
	fclose(f);

	//recherche de l'enfant dans le tableau []

if(y==1){
	int j;
	for(j=i;j<n;j++) //suppression
	{
	N[j]=N[j+1];
	}
	n--;
	f=fopen(chemin,"w"); //on reouvre lefichier en mode w pour ecraser les anciens données 888

	if (f==NULL)
	printf("erreur");
	else
	{
	for(i=0;i<n;i++)
	fprintf(f, "%s %s %s %s %s %s %s %s\n", N[i].Nom, N[i].Prenom, N[i].CIN, N[i].email,N[i].adresse,N[i].profession,N[i].tel,N[i].nombre);//on ajoute les nouveaux données
	}fclose(f);
}
}

return y;
}

///////////////////rechercher avec nom et prenom //////////////////////
parent rechercher_parent(char chemin[], parent pp)
{

parent me,dd;
FILE *f;
strcpy(dd.Nom,"-1");
strcpy(dd.Prenom,"-1");

f=fopen(chemin,"r+");
  
while(fscanf(f, "%s %s %s %s %s %s %s %s \n",me.Nom,me.Prenom,me.CIN,me.email,me.adresse,me.profession,me.tel,me.nombre)!=EOF )
{
if((strcmp(pp.Nom,me.Nom)==0)&&	(strcmp(pp.Prenom,me.Prenom)==0))
{
dd=me ;
}
}
fclose(f);
return dd ;
}
