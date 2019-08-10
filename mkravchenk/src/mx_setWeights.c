#include "header.h"

static void changeElementA(int *mass, int M, int i, int j ) {
    if((i > 0) && (*(mass + M * (i-1) + j) != -1)) {
        if((*(mass + M * (i-1) + j) < 0) 
        || (*(mass + M * (i-1) + j) > *(mass + M * i + j)))
        *(mass + M * (i-1) + j) = *(mass + M * i + j) + 1;
    }
}

static void changeElementB(int *mass,int N, int M, int i, int j ) {
    if((i < N-1) && (*(mass + M * (i + 1) + j) != -1)) {
        if((*(mass + M * (i+1) + j) < 0) 
        || (*(mass + M * (i+1) + j) > *(mass + M * i + j)))
        *(mass + M * (i+1) + j) = *(mass + M * i + j) + 1;
    }
}

static void changeElementC(int *mass, int M, int i, int j ) {
    if(((j < M-1) && (*(mass + M * i + (j + 1)) != -1))) {
        if((*(mass + M * i + (j + 1)) < 0) 
        || (*(mass + M * i + (j + 1)) > *(mass + M * i + j)))
        *(mass + M * i + (j + 1)) = *(mass + M * i + j) + 1;
    }
}

static void changeElementD(int *mass, int M, int i, int j ) {
    if((j > 0) && (*(mass + M * i + (j - 1)) != -1)) {
        if((*(mass + M * i + (j - 1)) < 0) 
        || (*(mass + M * i + (j - 1)) > *(mass + M * i + j)))
            *(mass + M * i + (j - 1)) = *(mass + M * i + j)+ 1;
    }
}

void mx_setWeights( int *mass, int N, int M) {
        for(int k=0; k <N*M;k++) {
            for (int i=0; i < N; i++) {
                for (int j=0;j < M;j++) {
                    if (*(mass + M * i + j) >= 0) {
                        changeElementA(mass, M, i, j);
                        changeElementB(mass, N, M, i, j);
                        changeElementC(mass, M, i, j);
                        changeElementD(mass, M, i, j);
                    }
                }
            }
        }
}
