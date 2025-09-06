#include <stdio.h>
int main()
{
    int a = 0x011;
    int b = 0x000;
    int c = a | b;
    printf("%d", c);
    return 0;
}