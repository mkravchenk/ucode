#include "header.h"

void mx_cardoutput(int *x, int* y, char *map, int c, int d) {
	if ((x[0] < 0 || x[0] > c) || (x[1] < 0 || x[1] > c) || (y[0] < 0 || y[0] > d) || (y[1] < 0 || y[1] > d)) {
    	write(2,"points are out of map range\n", 28);
        free(map);
        exit(0);
    }
    if (map[x[0]*2+y[0]*(c+1)*2] == '#') {
        write(2,"entry point cannot be an obstacle\n", 34);
        free(map);
        exit(0);
    }
    if (map[x[1]*2+y[1]*(c+1)*2] == '#') {
        write(2,"exit point cannot be an obstacle\n", 33);
        free(map);
        exit(0);
    }
}

