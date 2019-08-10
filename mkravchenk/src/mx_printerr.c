#include "header.h"

void mx_printerr(const char *s) {
    write(2,s,mx_strlen(s));
    char c = '\0';
    write(2,&c,1);
}
