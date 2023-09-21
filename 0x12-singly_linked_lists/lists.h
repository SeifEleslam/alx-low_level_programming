#ifndef MAIN_H
#define MAIN_H

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);
void print_num(size_t num);
void print_str(char *s, size_t len);

size_t print_list(const list_t *h);

#endif

