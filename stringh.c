#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    char s1[]= "happy" ;
    char s2[]= "happy" ;
    char s3[55];
    printf("the strcmp for s1,s2 returned %d",strcmp(s1,s2));
    //  strcmp compares ascii values of alphabets 
    // for happy and ravi as h is smaller , answer comes in negative [smaller - bigger = -]
    // for happy and aavi as h is bigger  , answer comes in positive [bigger - smaller = +]
    // for happy and havi as h and h is similar it will go to next letter and if all the letters are equal then answer will be 
    return 0;
}
