#include <unistd.h>
#include <fcntl.h>
#include "library01.h"
int main (void)
{
    int y = fd_fun (open ("test.txt", O_WRONLY | O_CREAT));
    int *ptr = &y;
    write (*ptr, "new file \n", 10);
    return (0);
}
