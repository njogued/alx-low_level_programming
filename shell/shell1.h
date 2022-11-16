#ifndef SHELL1_H
#define SHELL1_H

#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int checkfile(char *file);
char *check_path(char *path, char *av);
char *joiner(char *str1, char *str2);
extern char ** environ;
char *readline(void);
char **_strtok(char *input_line, int len);
#endif
