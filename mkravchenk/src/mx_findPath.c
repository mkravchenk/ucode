#include "header.h"

static void noPath() {
    mx_printerr("route not found\n");
    exit(1);
}

int mx_findPath(char* massC, int *mass , int *x, int *y, int *size) {
        if ((*(mass + y[1] * size[1] + (x[1] - 1)) < 0) && (*(mass + y[1] * size[1] + (x[1] + 1)) < 0) 
        && (*(mass + (y[1] - 1) * size[1] + x[1])) && (*(mass + (y[1] + 1) * size[1] + x[1]) < 0)) {
           noPath();
        }
    else {
        mx_checkMovements(massC, mass , x, y, size);
        return *(mass + size[1] * y[1] + x[1]);
    }
    return 0;
}
