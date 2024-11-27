#include<stdio.h>

void swap (int *x,int *y)
// idhar bracket ke andar yeh likha hua hai ki jo bhi variable ka address aayega input se vo variable hoga integer (int) 
// "*x" ka mtlb yeh hai ki yeh kisi variable ke address ki taraf point kara hai
//  (yaani ki jo bhi variable aayega input ke through uske address ki taraf point hoga)
{
int temp;
temp= *x;
// temp ko 34 kardiya
*x=*y;
// a=b kardiya means a=74
*y=temp;
// before this temp = 34, now b=temp kardiya basically saying b=34
 
}


int main(int argc, char const *argv[])
{
    int a=34,b=74;
    printf("%d and %d\n",a,b );
    swap(&a,&b);
    // kyuki as a variable sirf address valid hai isliye "&" ka use hua hai 
    printf("%d and %d\n",a,b);
        return 0;
}
