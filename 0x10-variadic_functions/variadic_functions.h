#ifndef HEADERFILE
#define HEADERFILE
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct format {
	void (*func)(va_list);
	char type;
}

#endif
