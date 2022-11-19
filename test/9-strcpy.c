#include "main.h"
#include <string.h>
/**
 * Documentation
 */
char *_strcpy(char *dest, char *src)
{
	/**
	 * int iterator, len
	 * find strlen (src)
	 * iterate using i (i < len) and assign
	 * dest[i] = src[i]
	 */
	int i, len;
	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		*(dest+i) = *(src+i);
	}
	return(dest);
}
