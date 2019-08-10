#ifndef HEADER_
#define HEADER_
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <stdio.h>
int mx_drawMaxDistance(char* massC, int *mass, int *size);
int mx_findPath(char* massC, int *mass , int *x, int *y, int *size);
void mx_checkMovements(char* massC, int *mass , int *x, int *y, int *size);
char *mx_map_read(char *map, int *N, int *M);
void mx_setWeights( int *mass, int N, int M);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printint(int n);
void mx_printchar(char c);
void mx_printerr(const char *s);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_cardoutput(int *x, int* y, char *map, int c, int d);
char *mx_validated(int argc, char *argv[],int *x, int *y);
void mx_error(char **argv,char * map);
void mx_maperror(int *b, int *c, int *d, char *map,int i);
char *maperror(char *argv[], int q, int *w);
int mx_argvend(int argc, char *argv[]);
void mx_map_write(int M, int N, char *str);

#endif
