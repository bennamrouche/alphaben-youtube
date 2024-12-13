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

// main filename line1 line2 line3  ...

int main(int ac,char **av)
{

if(ac == 1)
{
    exit(0);
}

    int fd =  open(av[1],O_CREAT | O_WRONLY | O_TRUNC ,0666);
    if(fd == -1)
{
    perror("Error");
    exit(-1);
}

   for(int i = 2; i < ac; i++)
   {
        int len =  strlen(av[i]);

        int size  =  write(fd,av[i],len);

        write(fd,"\n",1);
        size += 1;
        
        printf("write: filename = %s size = %d\n", av[1], size);
   } 

    return 0;
}
