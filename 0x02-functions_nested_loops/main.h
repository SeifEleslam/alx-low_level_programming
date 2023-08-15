#include <stdio.h>
#include <string.h>
#include <unistd.h>
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c)
{
    return (write(1, &c, 1));
}
#endif

