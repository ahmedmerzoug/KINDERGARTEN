#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "classe.h"




////////////////////////////////////// rechercher classe ///////////////////////////////////////////////
classe rechercher_classe(char chemin[], classe c)
{
classe me,dd;
FILE *f;
strcpy(dd.Nom_classe,"-1");
f=fopen(chemin,"r+"); 
while(fscanf(f, "%s %s %s %s %s %s \n",me.Niveau,me.Nom_classe,me.CIN_maitresse,me.CIN_aide,me.capacite,me.ID_camera)!=EOF )
{
if((strcmp(c.Nom_classe,me.Nom_classe)==0))	
{
dd=me ;
}
}
fclose(f);
return dd ;
}

void ajouter_classe(char chemin[], classe c)
{
    FILE *f;

    f=fopen(chemin,"a");

fprintf(f, "%s %s %s %s %s %s\n",c.Niveau,c.Nom_classe,c.CIN_maitresse,c.CIN_aide,c.capacite,c.ID_camera);
fclose(f);
}


////////////////////////////          fonction supprimer //////////////////////////////////////////////////////////////////////
int supprimer_classe(char chemin[], char nom[])
{
 int y=0;
 int i=0,n=0;
 classe N[80];
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
	while(fscanf(f,"%s %s %s %s %s %s \n", N[n].Niveau, N[n].Nom_classe, N[n].CIN_maitresse, N[n].CIN_aide,N[n].capacite,N[n].ID_camera) !=EOF)
	{
		if(strcmp(nom,N[n].Nom_classe) ==0)
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
	fprintf(f, "%s %s %s %s %s %s\n", N[i].Niveau, N[i].Nom_classe, N[i].CIN_maitresse, N[i].CIN_aide,N[i].capacite,N[i].ID_camera);//on ajoute les nouveaux données
	}fclose(f);
}
}

return y;
}
