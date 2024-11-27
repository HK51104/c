// BREAK AND CONTINUE LOOPS
// ek baar smajhna bhi hai
// multiplication table , temp unit change


#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }

        if (age > 10)
        {
            continue;
        }
        printf("we have not come across any continue statement");
        printf("we have not come across any continue statement");
        printf("we have not come across any continue statement");
        printf("we have not come across any continue statement");
        printf("happy is a good boy");
    }
    return 0;
}
