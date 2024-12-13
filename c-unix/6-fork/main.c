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
#include <stddef.h>

/*
int main()
{
// one function call 
fork();
//--------- 
print("hello\n");
}
:output
hello
hello 

int main()
{
  int x = 10;
    int pid  = fork();
    if(pid == 0)
        x= 20;
    printf("%d\n", x);  
}

:output 
10
20
---- or ---
20 
10 
*/

/*
fork();
fork();
fork()
    printf("hi\n");

output: 
?
*/
int main()
{
    // |
    fork();
//   | |
    fork();
//  || ||
    fork();
// || || || ||

    printf("hi\n");


    return 0;
}

// 2^ 

/*
 | 
fork()
 | |
fork()
|| || 
fork()
|| || || || 

*/


