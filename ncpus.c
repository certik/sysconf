#include "sys/sysctl.h"
#include "stdio.h"

int main()
{
    int ncpus = 1;
    size_t len = sizeof(ncpus);
    sysctl((int[2]) {CTL_HW, HW_NCPU}, 2, &ncpus, &len, NULL, 0);
    printf("%d", ncpus);
    return 0;
}
