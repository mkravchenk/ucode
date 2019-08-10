#include "header.h"

void mx_error(char **argv,char * map) {
	int b = 2;
	while(b < 6) {
    	for(int a = 0; argv[b][a]; a++){
        	if (mx_isdigit(argv[b][a]) == 0 && argv[b][0] != '-' && argv[b][0] != '+') {
            	write(2,"error\n", 6);
                free(map);
                exit(0);
           	}
    	}
    	b++;
    } 
}

