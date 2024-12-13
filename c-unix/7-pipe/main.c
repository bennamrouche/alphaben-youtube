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

/*
	set(int fd);
	char *get(int fd); allocated buffer 

*/

/*
send data between parent and child process

*/

void set(int fd)
{
	char *data = "alphaben";

	write(fd,data,strlen(data));
}
char *get(int fd)
{
	char buff[25];
	memset(buff,0,25);
	read(fd, buff, 25);
	return strdup(buff);
}


int main(int argc,char **argv)
{

	int fds[2];;

	if(pipe(fds) == -1)
	{
		perror("Error: ");
		exit(-1);
	}

	int pid = fork();
if(pid != 0)
{
	set(fds[1]);
	
}else
{
	char* data = get(fds[0]);
	printf("%s\n",data);
	free(data);

}
	printf("pid = %d %d %d \n",pid,getpid(),getppid());
	/// 
	close(fds[0]);
	close(fds[1]);

	return 0;
}


