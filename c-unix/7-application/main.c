/****************************************************************************##
##                            c unix course                                   ##
##                            by alphaben                                     ##
##                            2024/12                                         ##
##                            https://www.youtube.com/@alphaben0              ##
##*****************************************************************************/
/*
    cat filename | tr -d -c '[:alnum:]' | tr 'a-z' 'A-Z'
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include<assert.h>




if_exit(int condition, char *msg)
{
    if(0 == condition)
	{
		printf("usage: a.out input output\n");
		exit(-1);
	}
}


int main(int argc,char **argv)
{

	if_exit(argc != 3,"usage: a.out input output\n")
	
	// -----------------< input output --------------
	
	int infd  = open(argv[1],O_RDONLY);
	
	if_exit(infd,"fail to open input file");
	
	int outfd  = open(argv[2],O_WRONLY| O_CREAT | O_TRUNC);
	
	if_exit(infd,"fail to open output file");
	
	// -----------------< pipies --------------
	
	    int fds1[2];
	    
	    pipe(fds1);
	    int fds1[2];
	
	

	return 0;
}

void to_upper()
{

}

/**/


void filter()
{

}
