#include "header.h"
#include <stdio.h>

void mx_initMas(char* massC, int* mass, int *x, int *y, int* size) {
    int N = size[0];
    int M = size[1];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if(*(massC + i * M + j) == '#') 
                *(mass + i * M + j) = -1;
            if (*(massC + i * M + j) == '.') 
                *(mass + i * M + j) = -2;
        }
    }
    *(mass + y[1] * M + x[1]) = -3; 
    *(mass + y[0] * M + x[0]) = 0;    
}

char* mx_findThePass(char *massC, int *N_, int *M_, int *x, int *y) {
    int N = *N_;
    int M = *M_;
    int mass[N*M];
    int size[2] = {N,M};
    int output[2] = {0,0};
    mx_initMas(massC,&mass[0],x,y,size);
    mx_setWeights( mass, N, M);
    output[0] = mx_drawMaxDistance(massC, mass, size);
    output[1] = mx_findPath(massC, mass , x, y, size);
    mx_printstr("dist=");
    mx_printint(output[0]);
    mx_printstr("\n");
    mx_printstr("exit=");
    mx_printint(output[1]);
    mx_printstr("\n");
    return massC;
}

int main(int argc, char *argv[]) {
    int x[2] = {0,0};
    int y[2] = {0,0};
    int N = 0;
    int M = 0;
    char *str;
    str = mx_validated(argc,  argv, x,y); 
    str = mx_map_read(str, &N, &M);
    str = mx_findThePass(str, &N, &M, x, y);
    mx_map_write(M,N,str);
    
    return 0;
}
