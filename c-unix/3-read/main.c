/****************************************************************************##
##                            c unix course                                   ##
##                            by alphaben                                     ##
##                            2024/12                                         ##
##                            https://www.youtube.com/@alphaben0              ##
##*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

// charcount 
// main filename char
// count of [C] = N 

#define  BUFF_SIZE 64

int char_count(int fd,char c)
{
    int count = 0;
    char buff[BUFF_SIZE];
    int read_size = 0;
    memset(buff,0,BUFF_SIZE);

    while ((read_size = read(fd,buff,BUFF_SIZE))> 0)
    {
        for(int i = 0; i < read_size; i++)
        {
            if(buff[i] == c)
                count++;
        }
    
    memset(buff,0,BUFF_SIZE); 
    }
    

    return count;
}


int main(int ac,char **av)
{
    if(ac != 3)
    {
        printf("usage: main filename char\n");
        exit(0);
    }

    if(strlen(av[2]) != 1)
    {
       printf("char arg must be one character\n");  
       exit(0);
    }

   int fd =  open(av[1],O_RDONLY);   

   if(fd == -1)
   {
    perror("Error: ");
    exit(-1);
   }

    int count = char_count(fd,av[2][0]);

    printf("count of [%c] = %d\n",av[2][0],count);


    close(fd);

    return 0;
}
