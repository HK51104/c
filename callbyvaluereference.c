#include<stdio.h>

void changevalue(int* address)
{

 *address=3450;
//  jo bhi variable aayega vo ho jayega "=3450"

}

int main(int argc, char const *argv[])
{
    int a=34,b=56;
    printf(" the value of a now is %d",a);
    changevalue(&a);
    printf("the value of a now is %d ",a);
        return 0;
}
