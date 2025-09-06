#include <stdio.h>
int main()
{
    int array[3] = {1, 2, 3};
    char *byte_pointer = (char *)array;
    for (size_t i = 0; i < sizeof(array); i++)
    {
        printf("%02x ", byte_pointer[i]);
    }
}