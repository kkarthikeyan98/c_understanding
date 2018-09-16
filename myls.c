/* Download apue.3e from http://www.apuebook.com/code3e.html, extract to current directory and 'make' (command: "make" ) it.

compile with the command: "gcc apue.3e/lib/error.o myls.c -o myls"
run with command: "./myls directory_name"
*/
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include "apue.3e/include/apue.h"            

int main(int argc, char *argv[])            
{
	DIR *dp;
	struct dirent *dirp;
	
	if( argc != 2)
		err_quit("usage: ls directory_name");
		
	if((dp = opendir(argv[1])) == NULL)
		err_sys("can't open %s", argv[1]);
		
	while((dirp = readdir(dp)) != NULL)
		printf("%s\n", dirp->d_name);
		
	closedir(dp);
	exit(0);
}
