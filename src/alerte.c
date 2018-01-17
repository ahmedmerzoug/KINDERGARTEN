#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"alerte.h"
#include"braclet.h"


int verif_p(bracelet1 b)
{
	bracelet1 tb[40];
	int n,x=0,i=0,t,h,p,g;

	FILE *f;
	f=fopen("pannes.txt","r");
while(fscanf(f,"%s %s %d %d %d\n",tb[i].id,tb[i].h,&t,&p,&g)!=EOF)
	{
	i++;
	}
n=i;
for(i=0;i<n;i++)
	{
		if(strcmp(b.id,tb[i].id)==0)
			{
			x=1;
			}
	}
return x;
}
void alerte(char ch1[],char ch2[])
{
int k,l,m;
k=0;l=1;m=2;
	FILE *f1,*f2;
	int x=1,i,n;
	double f=0.25;		
	bracelet1 tb[40];
f2=fopen(ch2,"w");	
f1=fopen(ch1,"r");
while(fscanf(f1,"%s %s %f %d %lf %lf\n",tb[i].id,tb[i].h,&tb[i].t,&tb[i].p,&tb[i].pos.lat,&tb[i].pos.lon)!=EOF)
	{
	i++;
	}
n=i;
fclose(f1);
for(i=0;i<n;i++)
	{

x=verif_p(tb[i]);
if(x!=1)
{
if((tb[i].t)>37.500 && (tb[i].t)<42)
{

fprintf(f2,"%s %s %f %d %lf %lf %d\n",tb[i].id,tb[i].h,tb[i].t,tb[i].p,tb[i].pos.lat,tb[i].pos.lon,k);	
}
if((tb[i].p<74)||(tb[i].p>111))
{

fprintf(f2,"%s %s %f %d %lf %lf %d\n",tb[i].id,tb[i].h,tb[i].t,tb[i].p,tb[i].pos.lat,tb[i].pos.lon,l);	
}
if(((tb[i].pos.lat)-36.806495>0.25)||((tb[i].pos.lon)-10.181532>0.25)||((tb[i].pos.lat)-36.806495<-0.25)||((tb[i].pos.lon)-10.181532<-0.25))
{

fprintf(f2,"%s %s %f %d %lf %lf %d\n",tb[i].id,tb[i].h,tb[i].t,tb[i].p,tb[i].pos.lat,tb[i].pos.lon,m);	
}
}		
}	
fclose(f2);
}
