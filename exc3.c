#include<stdio.h>
int fib_recursive(int n)
{
    if (n==1||n==2)
    {
      return n-1; 
    }
    else
    {
    return fib_recursive(n-1)+fib_recursive(n-2); 
    }
}
int fib_iterative(int n)
{
     return 0;
}
int main()
{
    int number;
    printf("enter the index to get the fibonacci series");
    printf("\n");
    scanf("%d", &number);
    printf("the value of fibonacci series at index %d is %d",number,fib_recursive(number));
    printf("\n");
    printf("the value of fibonacci series at index %d is %d",number,fib_iterative(number));
    return 0;
}


