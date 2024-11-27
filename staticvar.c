#include <stdio.h>
int func1(int b)
{
    static int myvar = 0;
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    return 0;
}
int main(int argc, char const *argv[])
{
    int b;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr=&val;
    return 0;
}
