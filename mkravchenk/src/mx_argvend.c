#include "header.h"

int mx_argvend(int argc, char *argv[]) {
	if (argc !=  6) {
    	write(2,"usage: ./race04 [file_name] [x1] [y1] [x2] [y2]\n", 48);
        exit(0);
    }
	int fd = open(argv[1],  O_RDONLY);
        if (fd < 0) { 
    	    write(2,"map does not exist\n", 19);
            exit(0);
        }
    int q = 0;
    char t;
    while (read(fd, &t, 1) > 0)
        q++;
    close(fd);
    	if(q == 0) {
        	write(2,"map does not exist\n", 19);
            exit(0);
        }
	return q;
}

