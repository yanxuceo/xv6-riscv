#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int 
main(int argc, char const *argv[])
{
    int time = 0;
	if (argc != 2)
	{
		fprintf(2, "Usage: sleep seconds\n");
		exit(1);
	}

	time = atoi(argv[1]);
    fprintf(2, "given time is %d\n", time);

	sleep(time);
	
	exit(0);
}