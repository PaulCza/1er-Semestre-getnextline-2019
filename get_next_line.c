/*
** EPITECH PROJECT, 2020
** get_next_line.c
** File description:
** waiting bttf
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char str[9999];
    static char *line;
    static int b;
    int c = 0;

    line = malloc(sizeof(char) * 10);
    while (read(fd, str, 9999999) == 9999999){
    }
    while (str[b] != '\n' && str[b] != '\0'){
        line[c] = str[b];
        b = b + 1;
        c = c + 1;
    }
    b = b + 1;
    return line;
}
