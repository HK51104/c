#include<stdio.h>
#include<string.h>

int myfunc(int a)
{
    extern int sum;
  
    return sum;
}
 int sum=5;

 int main(int argc, char const *argv[])
 {
    int a;
    printf("sum=%d",myfunc(a));
    return 0;
 }
 