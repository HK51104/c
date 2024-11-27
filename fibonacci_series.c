#include<stdio.h>

int fibrecursion(int n)
{
if (n==1||n==2)
{
   return n-1;
}
else
{
    return fibrecursion(n-1)+fibrecursion(n-2);
}
}
int main(int argc, char const *argv[])
{
    int n;
  printf("enter the index number");
  scanf("%d",&n);
  printf("the fibannoci series of %d is %d",n,fibrecursion(n));

    return 0;
}

