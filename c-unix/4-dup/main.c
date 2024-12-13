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


int save_output()
{
   static int fd = -1;
   if(fd == -1)
   {
        fd = dup(1);
    dprintf(2,"create new fd %d\n",fd);
 
   }

   return fd;

   return     dup(1);
}

void close_output()
{
    close(1);
}

// print: [hello c] in stdout  
// allowed: dup write  strlen   

int main()
{
 //-------------  one function call ----------
 
 save_output();
    
//-------  don't remove this -------/

     close_output();
  

//------  code here --------------
int newfd = save_output();
char *pt = "hello c";

printf("hello output\n"); // not work 
write(newfd,pt,strlen(pt));// yes

    return 0;
}
