#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *h);

#endif

