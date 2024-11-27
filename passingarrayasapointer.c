#include<stdio.h>

void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n",i,ptr[i]);
        // now that address of arr[1] is stored in "ptr",we can use ptr in place of that 
        // ptr=arr,therefore ptr[i]=arr[i]
        // we can also use *(ptr+i) in place of ptr[i]
        // (above)we know that address of "arr" is stored in the address of "ptr" 
           
    }
}

int main(int argc, char const *argv[])
{
    int arr[]={23,13,3,4};
    func2(arr);
    // the address of first element of arr is stored in "arr"
    // basically "&" na lagakar bhi humne address bhejdiya
    return 0;
}
