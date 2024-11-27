// WITHOUT ARGUMENT AND WITHRETURN FUNCTION

#include <stdio.h>

int takenumber()
// function declaration is here
{

    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
    c = takenumber();
    // function is called here
    printf("the number enetered is %d\n", c);
    return 0;
}
