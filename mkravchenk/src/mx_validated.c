#include "header.h"

char *mx_validated(int argc, char *argv[],int *x, int *y) {
    int q = mx_argvend(argc,argv);
    int i;
    char *map = maperror(argv, q,&i);
    int b = 0;
    int c = 0;
    int d = 0;
    mx_maperror(&b,&c,&d,map,i);    
    c = c / 2;
    mx_error(argv,map);
	d--;
	x[0] = mx_atoi(argv[2]);
	y[0] = mx_atoi(argv[3]);
	x[1] = mx_atoi(argv[4]);
	y[1] = mx_atoi(argv[5]);
    mx_cardoutput(x,y, map, c, d);
	return map;
}

