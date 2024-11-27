// WHILE LOOP

#include <stdio.h>

int main()
{
    int i = 0;  
    // initialisation kari hai 
    while (i < 10)
    // condition dedi yahan par
    {
        printf("%d\a", i);
        i = i + 1;
        // yahan likha hai ek bada kar waapis likho jabtk condition fail nahi hoti 
    }

    return 0;
}
