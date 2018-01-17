#ifndef braclet_h
#define braclet_h


struct gps
{
	double lat;
	double lon;
};
typedef struct gps gps;
struct bracelet 
{
	char id[5];
	char h[20];
	float t;
	int p;
	gps pos;
};
typedef struct bracelet bracelet;

struct treebr
{
	char id[5];
	char h[20];
	char t[20];
	char p[20];
	char pos[20];
};
typedef struct treebr treebr;


#endif
