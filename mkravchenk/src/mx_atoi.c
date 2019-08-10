#include "header.h"

int mx_atoi(const char *str) {
	int a = 0;
	int b = 1;
	for (int i = 0; str[i]; i++) {
		if ((mx_isspace(str[i]) > 0) && a == 0 ) 
			mx_atoi(&str[i+1]);
		else if (str[i] == ('-') || str[i] == ('+')) {
				if (mx_isdigit(str[i-1]) > 0)
					break;
				else if (b == 1 && str[i] == ('-') && str[i+1] != ('-')) 
					b = -1;
				else if (b == 1 && str[i] == ('+') && str[i+1] != ('+'))
					b = 1;
				else
					return 0;
				}
		else if (mx_isdigit(str[i]) == 1)
			a = a * 10 + str[i] - '0';
		else 
			return a * b;
	}
	return a * b;
}
