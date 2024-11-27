#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int a =5;
    float b=5.5; 
    void* ptr ;
    ptr=&a;
    printf("the value of a is %d\n",*((int*)ptr));
    // here we give "void pointer" a meaning by making it a "integer pointer"
    ptr=&b;
    // we can use void pointer various times to store different adrressess of different variables
    // and use them according to our need by typecastin accordingly 
    printf("the value of b is %.1f\n",*(float*)ptr);
    return 0;
}
