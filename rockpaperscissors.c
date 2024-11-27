#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int h = 0, l = 0;
    int n;
    int m;
    char name;

    printf("\n");
    printf("\n");
    printf("A WARM WELCOME TO THE GAME.\n");
    printf("WISH YOU ALL THE BEST!!!!!\n");

    printf("\n");
    printf("\n");
    printf("*****INSTRUCTIONS*****\n");
    printf(" FOR ROCK PRESS-0\n");
    printf(" FOR PAPER PRESS-1\n");
    printf(" FOR SCISSOR PRESS-2\n");

    printf("\n");
    printf("\n");
    printf("LET's START THE GAME\n");
    printf("ENTER YOUR ALPHABET(first letter of the name)\n");
    scanf("%c", &name);
    getchar();

    for (int i = 0; i < 3; i++)
    {  
        printf("\n");
        printf("ROCK PAPER SCISSOR!!!!!\n");
        scanf("%d", &n);
        getchar();

        switch (n)
        {
        case 0:
            m = rand() % 3;
            printf("%c-%d  LAPPY-%d\n", name, n, m);

            switch (m)
            {

            case 1:
                printf("LAPPY WINS\n");
                l++;
                break;
            case 2:
                printf("%c WINS\n", name);
                h++;
                break;
            default:
                printf("it is a tie points are shared\n");
                h++, l++;
                break;
            }
            break;
        case 1:
            m = rand() % 3;
            printf("%c-%d  LAPPY-%d\n", name, n, m);

            switch (m)
            {
            case 0:
                printf("%c WINS\n", name);
                h++;
                break;
            case 2:
                printf("LAPPY WINS\n");
                l++;
                break;

            default:
                printf("it is a tie points are shared\n");
                h++, l++;
                break;
            }
            break;
        case 2:
            m = rand() % 3;
            printf("%c-%d  LAPPY-%d\n", name, n, m);

            switch (m)
            {
            case 0:
                printf("LAPPY WINS\n");
                l++;
                break;
            case 1:
                printf("%c WINS\n", name);
                h++;
                break;
            default:
                printf("it is a tie points are shared\n");
                h++, l++;
                break;
            }
            break;
        }
    }

    printf("\n");
    printf("\n");

    printf("FINAL SCOREBOARD\n");
    printf("%c  LAPPY\n", name);
    printf("%d    %d\n", h, l);

    printf("\n");
    printf("\n");
    if (h > l)
    {
        printf("CONGRATULATIONS!!\n");
        printf("YOU WON THE GAME.\n");
    }
    else if (l > h)
    {
        printf("OOPS!!\n");
        printf("YOU LOST THE GAME\n");
        printf("BETTER LUCK NEXT TIME.\n");
    }
    else
    {
        printf("WOW!!\n");
        printf("IT'S A TIE\n");
    }

    return 0;
}
