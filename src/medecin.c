#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "medecin.h"


////////////////////////////////////// rechercher medecin ///////////////////////////////////////////////
medecin rechercher_medecin(char chemin[], medecin M)
{
medecin me,dd;
FILE *A;
strcpy(dd.Nom,"-1");
strcpy(dd.Prenom,"-1");
A=fopen(chemin,"r+");
  
while(fscanf(A, "%s %s %s %s %s %s \n",me.Nom,me.Prenom,me.CIN,me.email,me.adresse,me.tel)!=EOF )
{
if(((strcmp(M.Nom,me.Nom)==0)) && ((strcmp(M.Prenom,me.Prenom)==0)))	
{
dd=me ;
}
}
fclose(A);
return dd ;
}


void ajouter_medecin(char chemin[], medecin M)
{
    FILE *f;

    f=fopen(chemin,"a");

fprintf(f, "%s %s %s %s %s %s \n", M.Nom, M.Prenom, M.CIN, M.email, M.adresse, M.tel);
fclose(f);
}


////////////////////////////          fonction supprimer //////////////////////////////////////////////////////////////////////
int supprimer_medecin(char chemin[], char nom[], char prenom[])
{
 int y=0;
 int i=0,n=0;
 medecin N[80];
    FILE *A;

    A=fopen(chemin,"r");
    if(A==NULL)
    {
    printf("erreur");
    return;
    }
	else
	{
	//remplir le tableau Age par la structure N
	while(fscanf(A,"%s %s %s %s %s %s \n", N[n].Nom, N[n].Prenom, N[n].CIN, N[n].email, N[n].adresse, N[n].tel) !=EOF)
	{
		if((strcmp(nom,N[n].Nom) ==0) && (strcmp(prenom,N[n].Prenom) ==0))
			{i=n;
			y=1;}
	n++;
	}
	fclose(A);

	//recherche de l'enfant dans le tableau []

if(y==1){
	int j;
	for(j=i;j<n;j++) //suppression
	{
	N[j]=N[j+1];
	}
	n--;
	A=fopen(chemin,"w"); //on reouvre lefichier en mode w pour ecraser les anciens données 888

	if (A==NULL)
	printf("erreur");
	else
	{
	for(i=0;i<n;i++)
	fprintf(A, "%s %s %s %s %s %s\n", N[i].Nom, N[i].Prenom, N[i].CIN, N[i].email, N[i].adresse, N[i].tel);//on ajoute les nouveaux données
	}fclose(A);
}
}

return y;
}

