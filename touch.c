#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
	int fd,i;
	if(argc < 2){
	printf(2, "sorry, can you write your new filename?\nThis command needs more than 2 arguments\n");
	}
	for(i=1;i<argc;i++){
		if((fd = open(argv[i], O_CREATE | O_RDWR)) < 0){
			printf(1, "touch: %s failed to create\n", argv[i]);
		}
		close(fd);
	}
	exit();
}



