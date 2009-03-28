#include "unistd.h"
#include "stdio.h"

int main()
{
    int ncpus;
    ncpus = sysconf(_SC_NPROCESSORS_ONLN);
    printf("%d", ncpus);
    return 0;
}
