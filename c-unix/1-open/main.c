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

int main()
{

    int fd = open("file.txt",O_WRONLY | O_CREAT | O_APPEND,0700);

    if(fd == -1)
    {
                perror("Error: ");
                exit(-1);
    }

    else
        printf("file open successfully");

    dprintf(fd,"test test\n");
}
