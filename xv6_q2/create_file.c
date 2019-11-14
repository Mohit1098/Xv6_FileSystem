#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{

	int fd = open("lab12file.txt",O_CREATE | O_RDWR );
	int i;
	for(i=0;i<1000;++i){
		write(fd,"MohitSingla",11);
	}
	exit();

}
