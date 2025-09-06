#include <stdio.h>
int main()
{
    int val = 0x12345678;
    char *byte_pointer = (char *)&val;
    for (size_t i = 0; i < sizeof(int); i++)
    {
        printf("%02x ", byte_pointer[i]);
    }
}