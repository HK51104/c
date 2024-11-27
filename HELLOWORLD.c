#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int h = 0, l = 0;
    int n;
    int m;
    char name[3];
    int rock=0;
    int paper=1;
    int scissor=3;
    printf("ROCK=0\n");
    printf("PAPER=1\n");
    printf("SCISSOR=2\n");
    printf("ENTER YOUR NAME\n");
    gets(name);
    getchar();
    printf("ROCK PAPER SCISSOR\n");
    scanf("%d", &n);
    getchar();

    
    switch (n)
    {
    case 0:
        m = rand() % 3;
        printf("%s-%d  lappy-%d\n", name, n, m);

        switch (m)
        {

        case 1:
            printf("lappy WINS\n");
            break;
        case 2:
            printf("%s WINS\n", name);
            break;
        default:
            printf("it is a tie points are shared");
            break;
        }
        break;
    case 1:
        m = rand() % 3;
        printf("%s-%d  lappy-%d\n", name, n, m);

        switch (m)
        {
        case 0:
            printf("%s WINS\n", name);
            break;
        case 2:
            printf("lappy WINS\n");
            break;
        default:
            printf("it is a tie points are shared");
            break;
        }
        break;
    case 2:
        m = rand() % 3;
        printf("%s-%d  lappy-%d\n", name, n, m);

        switch (m)
        {
        case 0:
            printf("lappy WINS\n");
            break;
        case 1:
            printf("%s WINS\n", name);
            break;
        default:
            printf("it is a tie points are shared");
            break;
        }
        break;
    }

    return 0;
}
