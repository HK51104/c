#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=34;
    int* ptra=&a;
// this means pointer "ptra" points towards the address of "a"
    printf("%d\n",ptra);
        printf("%d\n",ptra +1);
        // basically simple arithmetically add nahi hora hai but size add hora hai jitna ptra (int) leta hai


char b= 40;
char* ptrb = &b;
printf("%d\n",ptrb);
// as "*ptrb" points towards "b" therefore ptrb stores the value of address of b
ptrb++;
printf("%d\n",ptrb);
// as ptRb++ is written therefore value is increasing one by one 
printf("%d\n",ptrb-2);
// aur ab value 2 inus karke aayegi


int arr[]={1,2,3,4,5};
printf(" value at postion 3 of the array is %d\n",arr[3]);
printf("the address of first element of the array is %d\n",&arr[0]);
printf("the address of first element of the array is %d\n",arr);
// &arr[0]=arr(for some reason idk)
printf("the address of second element of the array is %d\n",&arr[1]);
printf("the address of second element of the array is %d\n",arr+1);
// &arr[1]=arr+1(for some reason idk)
printf("the value at address of first element of the array is %d\n",*(&arr[0]));
// the thing after comma simply means,,, point karro  arr[0] ki taraf and jo bhi value hai udhar store vo print kardo
printf("the value at address of first element of the array is %d\n",*(arr));
// already explained above
printf("the value at address of second element of the array is %d\n",*(&arr[1]));
//  the thing after comma simply means,,, point karro  arr[1] ki taraf and jo bhi value hai udhar store vo print kardo
printf("the value at address of second element of the array is %d\n",*(arr+1));
// already explained above




    return 0;
}



