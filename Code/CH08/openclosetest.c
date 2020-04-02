#include <fcntl.h>
#include <stdio.h>

int main()
{
    int fd, result;
    if (fd = open("test.txt", O_RDONLY, 0755) == -1)
    {
        result = creat("test.txt", 0755);
    }
    else
    {
        result = fd;
    }
    printf("%d\n", result);
    return 0;
}