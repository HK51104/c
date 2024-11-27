#include<stdio.h>

int func1(int array[])
{
for ( int i = 0; i < 4; i++)         
{
    printf("the value at %d is %d\n",i,array[i]);
}
// array[0]=382;
// very important point is that if we change any value here,it gets reflected in main ()
return 0;
}

int main(int argc, char const *argv[])
{
    int arr[]={23,13,3,4};
    printf("the value at index 0 is %d\n",arr[0]);
    func1(arr);
    printf("the value at index 0 is %d\n",arr[0]);
    return 0;
}
