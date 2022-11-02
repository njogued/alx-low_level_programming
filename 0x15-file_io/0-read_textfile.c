#include "main.h"
/**
 * read_textfile - Reads the text file
 * @filename: name of file
 * @letters: Letters to add
 *
 * Return: printed no of letters
 */
ssize_t read_textfile(const char *filename, size_t letters) 
{                                                           
        ssize_t fd;                                         
        size_t wr = 0, sz;                                  
                                                            
        char *c = malloc(sizeof(char) * letters);           
                                                            
        if (!filename)                                      
                return (0);                                 
                                                            
        fd = open(filename, O_RDONLY);                      
                                                            
        if (fd < 0)                                         
        {                                                   
                return (0);                                 
        }                                                   
                                                            
        sz = read(fd, c, letters);                          
                                                            
        c[sz] = '\0';                                       
                                                            
        wr = write(STDOUT_FILENO, c, sz);                   
                                                            
        free(c);                                            
        close(fd);                                          
                                                            
                                                            
        return ((wr != sz) ? 0 : wr);                       
} 
