

#include<string.h>
#include "login.h"


int validation_par_nom(char username[],char password[]){
if  
(((strcmp(username,"ahmed")==0) && (strcmp(password,"ahmed")==0))) {
return 1 ;
}
else if  (((strcmp(username,"tech")==0) && (strcmp(password,"tech")==0))) {
return 2 ;
}
else if  (((strcmp(username,"maitresse")==0) && (strcmp(password,"maitresse")==0))) {
return 3 ;
}
else if  (((strcmp(username,"parent")==0) && (strcmp(password,"parent")==0))) {
return 4 ;
}
else return 0 ;
}
