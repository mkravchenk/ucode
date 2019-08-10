#include "header.h"

char *maperror(char *argv[], int q, int *w) {
    char *map;  
    map = (char *)malloc(sizeof(char)*q);
    int i = 0;
	char t;
    int fd1 = open(argv[1],  O_RDONLY);
    while (read(fd1, &t, 1) > 0) {
    	map[i] = t;
        i++;
    }
    for(int a = 0; a < i; a++) { 
          if (a % 2 == 1 && map[a] != ',' && map[a] != '\n') {
                  write(2,"map error\n", 10);
                  free(map);
                  exit(0);
          }
          if (a % 2 == 0 && map[a] != '#' && map[a] != '.') {
                  write(2,"map error\n", 10);
                  free(map);
                  exit(0);
          }
      }
	*w=i;
	return map;
}

