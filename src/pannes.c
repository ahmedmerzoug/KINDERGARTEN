#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"pannes.h"


int verif_b(bracelet b, char ch[])
{
	bracelet tb[40];
	int n,x=0,i=0,t,h,p,g;
	FILE *f;
        char ch1[] = "stock.txt";
	f=fopen(ch1,"r");
while(fscanf(f,"%s %s %d %d %d %d\n",tb[i].id,tb[i].h,&h,&t,&p,&g)!=EOF)
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
/**/
int v_hor(bracelet b, char ch[])
{
	bracelet tb[40];
	int k=0,n,i=0;
	FILE *f;
	f=fopen(ch,"r");
while(fscanf(f,"%s %s %f %d %lf %lf\n",tb[i].id,tb[i].h,&tb[i].t,&tb[i].p,&tb[i].pos.lat,&tb[i].pos.lon)!=EOF)
	{
	i++;
	}
n=i;
for(i=0;i<n;i++)
	{
	if(strcmp(b.id,tb[i].id)==0)
		{
		k++;
		}
	}
return k;
}
/**/
void panne(char ch1[],char ch2[])
{
	FILE *f1,*f2;
	int x=1,i,n,v=0 , h=1 , t=1 , p=1 ,g=1;
	double f=2;	
	char id[20],hor[20];	
	bracelet b;
	bracelet tb[40];
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
h=1;
t=1;
p=1;
g=1;
v=v_hor(tb[i],ch1);
if(v!=3)
	{
x=verif_b(tb[i],ch2);
if(x!=1)
{
fprintf(f2,"%s %s %d %d %d\n",tb[i].id,tb[i].h,t,p,g);
}
	}
if(((tb[i].t)<34)||((tb[i].t)>42))
{
t=0;
}
if((tb[i].p<65)||(tb[i].p>125))
{
p=0;
}
if(((tb[i].pos.lat)-36.806495>f)||((tb[i].pos.lon)-10.181532>f))
{
g=0;
}
if((t==0)||(p==0)||(g==0))
	{
fprintf(f2,"%s %s %d %d %d\n",tb[i].id,tb[i].h,t,p,g);
	}
		}	
fclose(f2);
}
