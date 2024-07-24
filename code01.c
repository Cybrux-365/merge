#include <unistd.h>
#include <fcntl.h>
#include "library01.h"
int main (void)
{
    int fd = fd_fun (open ("test.txt", O_WRONLY | O_CREAT));
    write (fd, "new file \n", 10);
    return (0);
}
