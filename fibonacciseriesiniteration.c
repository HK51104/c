// FIBNACCI SERIES IS IN ITERATION

#include<stdio.h>

int main()
{
    int t1=0;
    int t2=1;
    int next_term=t1+t2;
    int n;
    printf("please enter the number upto which you want to find the fibbonacci series\n");
    scanf("%d",&n);
    
    printf("the fibbonacci series are %d %d",t1,t2);
    for (int i = 3; i <= n; i++)
    {
       printf("%d",next_term);
       t1=t2;
       t2=next_term;
       next_term=t1+t2;
    }
    
    return 0;
}
