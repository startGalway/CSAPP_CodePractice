#include <stdio.h>
int main()
{
    int a=1;
    int val = 0x25f4d7a8;
    int lval = val << 32;
    printf("val is : %x;lval is : %x",val,lval);
    return 0;
}