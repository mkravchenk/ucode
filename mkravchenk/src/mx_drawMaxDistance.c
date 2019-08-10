
int mx_drawMaxDistance(char* massC, int *mass, int *size) {
    int maxValue = 0;
    for (int i = 0; i < size[0]; i++) {
        for (int j = 0; j < size[1]; j++) {
            if (*(mass + i * size[1] + j) > maxValue) 
                maxValue = *(mass + i * size[1] + j);
        }
    }
    for (int i = 0; i < size[0]; i++) {
        for (int j = 0; j < size[1]; j++) {
            if (*(mass + i * size[1] + j) == maxValue) 
                *(massC + i * size[1] + j) = 'D';
        }
    }
    return maxValue;
}
