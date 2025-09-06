#include <stdio.h>
int main()
{
    char a = 127;
    char b = 1;
    printf("a:%x;b:%x\n", a, b);
    char c = a + b;
    printf("c:%d\n", (unsigned char)c);
    return 0;

}