#include "header.h"
char *mx_map_read(char *map, int *N, int *M) {
	char *map_new;
	int q = mx_strlen(map);
    map_new = (char *)malloc(sizeof(char)*q/2);


	int str_char = 0;
	int n = 0;
	int num = 0;
	for (int x = 0;	map[x] != '\0'; x++) { 
		if(map[x] == '\n') {
			n++;
		}
		else if(map[x] == ',') {}		
		else {
		map_new[num] = map[x];
		num++;
		}
	}
	str_char = num/n;
	
	*N = n;
	*M = str_char;
	free(map);
	return map_new;

}
