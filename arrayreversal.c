#include <stdio.h>
 int arrayreversal (int arr[])

{
    int temp;
   
    for (int i = 0; i < 6/2; i++)
    {
       temp=arr[i];
       arr[i]=arr[4-i];
       arr[4-i]=temp;
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("the %d element of array is %d\n",i,arr[i]);
    }
    printf("\n");
    arrayreversal(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("the %d element of array is %d\n",i,arr[i]);
    }
    
   
    return 0;
}
