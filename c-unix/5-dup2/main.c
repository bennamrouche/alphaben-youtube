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


void dup_example()
{
    int newfd = dup2(1,10);
    dprintf(newfd,"hello alphaben\n");
}

int save_output()
{
   static int fd = -1;
   if(fd == -1)
   {
        fd = dup(1);
   }

   return fd;

   return     dup(1);
}

void close_output()
{
    close(1);
}

// print: [hello c] in stdout  
// allowed: dup dup2      

int main()
{
 //-------------  one function call ----------
 
 save_output();
    
//-------  don't remove this -------/

     close_output();

//------  code here --------------

int newfd = save_output();
    dup2(newfd, 1);
//-------  don't remove this -------/ 

printf("hello c\n");

    return 0;
}
