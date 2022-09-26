#include "main.h"
/**
* _strchr - locates character in string
* @s: string
* @c: char
* Return: first occurence of c in string
*/
char *_strchr(char *s, char c)
{
    int i, j;
    char s2[];
    
    j=0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(s[i] = c)
        break;
    }
    while(s[i] != '\0')
    {
        s2[j] = s[i];
        j++;
        i++;
    }
    return(s);
}

