// do while loop

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 0;
    // index =0 is initialising that is kahan se index ki value start hogi
    printf("Enter a number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index);
        // yeh kehra hai ki index ko print kardo  and idhar %d daaali hai index ki value jo ki scanf mein
        //  bhi daali hai therefore jo bhi user scanf ki calue put krega vo hi index ki value hogi
        index = index + 1;
        //    yeh kehra index priont karne ke baad index +1 karke print karo aur aisa tbtk hota rhega
        //  jbtk whule waali condition false nahi ho jaati
    } while (index < 5);
    return 0;
}
