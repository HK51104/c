#include<stdio.h>
#define PI 3.14
#define SQUARE(h) h*h

int main(int argc, char const *argv[])
{
    float var=PI;
    int r=4;
    printf("the value of PI is %f\n", var);
    printf("the area of the cirlce is %f\n",  PI * SQUARE(r));
    return 0;
}
