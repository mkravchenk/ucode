#include "header.h"

void mx_checkMovements(char* massC, int *mass , int *x, int *y, int *size) {
    int i= y[1];
        int j = x[1];
        int movement = 0;
        int flag = 0;      
        if (*(massC + y[1] * size[1] + x[1]) == 'D') 
            flag = 1;
    while (1) {
        movement++;
        *(massC + size[1] * i + j) = '*';
        if ((j > 0) && (*(mass + size[1] * i + (j - 1)) >= 0) 
        && (*(mass + size[1] * i + (j - 1)) < *(mass + size[1] * i + j))) 
            j--;
        else if ((i > 0) && (*(mass + size[1] * (i - 1) + j) >= 0) 
        && (*(mass + size[1] * (i - 1) + j) < *(mass + size[1] * i + j))) 
            i--;
        else if((i < size[0] - 1) && (*(mass + size[1] * (i + 1) + j) >= 0) 
        && (*(mass + size[1] * (i + 1) + j) < *(mass + size[1] * i + j))) 
             i++;
        else if((j < size[1] - 1) && (*(mass + size[1] * i + (j + 1)) >= 0) 
        && (*(mass + size[1] * i + (j + 1)) < *(mass + size[1] * i + j))) 
            j++;
        if((i == y[0])&&(j == x[0])) 
            break;
        if (flag == 1) 
            *(massC + y[1] * size[1] + x[1]) = 'X';
    }
}
