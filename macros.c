#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    printf("File name is %s\n"__FILE__);
    printf("Today date is %s\n",__DATE__);
    printf("the line number is %d\n",__LINE__);
    return 0;
}
