#include "header.h"
void mx_map_write(int M, int N, char *str) {
	int b = open("path.txt", O_RDWR | O_CREAT, S_IWRITE | S_IREAD );
    int x = 0;
    for (int i = 0; i < N*M; i++) {
        if (x == M) {
            write(b, "\n", 1);
            x = 0;
       }
       write(b, &str[i], 1);
       x++;
    }
   
    write(b, "\n", 1);
     
	free(str);
	close(b);
}   

