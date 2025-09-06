#include <stdio.h>
typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer start,size_t len){
    size_t i;
    for(i=0;i<len;i++)
    {
        printf("% .2x",start[i]);
        printf(" ");
    }
    printf("\n");   
}
void show_int(int x)
{
    show_bytes((byte_pointer)&x,sizeof(int));
}
void show_float(float x)
{
    show_bytes((byte_pointer)&x,sizeof(float));
}
void show_pointer(void* pointer_num)
{
    show_bytes((byte_pointer)&pointer_num,sizeof(void*));
}
int main()
{
    int a=10;
    show_int(a);
    float b=10.0;
    show_float(b);
    int* p=&a;
    show_pointer(p);
    return 0;

}