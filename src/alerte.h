#ifndef aletre_h
#define alerte_h


#include<stdio.h>
#include<stdlib.h>



struct gps1
{
	double lat;
	double lon;
};
typedef struct gps1 gps1;
struct bracelet1 
{
	char id[5];
	char h[20];
	float t;
	int p;
	gps1 pos;
        int type_al ;
};
typedef struct bracelet1 bracelet1;

struct treeal 
{
	char id[5];
	char h[20];
	char t[20];
	char p[20];
	char lat[20];
        char lon[20];
        char type [20];
};
typedef struct treeal treeal;



int verif_p(bracelet1 b);
void alerte(char ch1[],char ch2[]);

#endif
