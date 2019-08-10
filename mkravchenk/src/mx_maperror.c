#include "header.h"

void mx_maperror(int *b, int *c, int *d, char *map,int i) {
	for(int a = 0; a < i; a++) {
    	if (map[a] != '\n')
        	*b=*b + 1;
        else {
			 if (*c == 0) {
             	*c = *b;
                *b = 0;
                *d = *d + 1;
             }
             else { 
             	if ( *c != *b) {
                	write(2,"map error\n", 10);
                    free(map);
                    exit(0);
                }
                else 
                	*b = 0;
                    *d = *d+1;
             }
        }
    }
}

