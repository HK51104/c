// RECURSION

// recursion means to define a function first then use it later on wheneever we need it

#include <stdio.h>

int factorial(int number)
// this will return integer as an answer therefore we have written int before factorial
// and also it will take number as input which is a integer therefore we write int num

{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
    // factorial function bana  kar ek hi loop mein usko kaafi baar use karliya this is recursion
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of\n ");
    scanf("%d", &num);
        printf("the factorial of %d is %d\n", num , factorial(num));
     
    return 0;
}
