#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "w");
    char str[4];
    fgets(str,5,ptr);
    printf("the string is %s\n",str);
    fclose(ptr);
    return 0;
}
