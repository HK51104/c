#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    char* ptr;
    printf("enter the number of characters in employee id\n");
    scanf("%d",&n);
    getchar();
    ptr = (char*) malloc((n+1)*sizeof(char));
    printf("enter the employee id\n");
    scanf("%s",ptr);
    // because ptr itself stores an address therefore we don't need to put "&" before it
    getchar();
    printf("the employee id is %s\n",ptr);
   
    return 0;
}
