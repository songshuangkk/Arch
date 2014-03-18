#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    int fd = open("/dev/urandom", O_NONBLOCK);
    if (fd == -1) {
        printf("Unable to open file\n");
        return 1;
    }

    int flags = fcntl(fd, F_GETFL);
    if (flags & O_NONBLOCK) {
        printf("non block is set\n");
    }

    int ret;
    char* buf = (char*)malloc(10000000);

    ret = read(fd, buf, 10000000);
    if (ret == -1) {
        printf("Error reading: %s\n", strerror(errno));
    } else {
        printf("bytes read: %d\n", ret);
    }

    return 0;
}
