#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int h = 0, l = 0;
    char n;
    int m;
    char name;
    char rock=r;
    char paper=p;
      char scissor=s;
    printf("ROCK=1\n");
    printf("PAPER=2\n");
    printf("SCISSOR=3\n");
    printf("ENTER YOUR NAME\n");
    scanf("%c", &name);
    getchar();
    printf("ROCK PAPER SCISSOR\n");
    scanf("%d", &n);
    getchar();

    
    switch (n)
    {
    case r:
        m = rand() % 3;
        printf("%c-%d  lappy-%d\n", name, n, m);

        switch (m)
        {

        case p:
            printf("lappy WINS\n");
            break;
        case s:
            printf("%c WINS\n", name);
            break;
        default:
            printf("it is a tie points are shared");
            break;
        }
        break;
    case p:
        m = rand() % 3;
        printf("%c-%d  lappy-%d\n", name, n, m);

        switch (m)
        {
        case r:
            printf("%c WINS\n", name);
            break;
        case s:
            printf("lappy WINS\n");
            break;
        default:
            printf("it is a tie points are shared");
            break;
        }
        break;
    case s:
        m = rand() % 3;
        printf("%c-%d  lappy-%d\n", name, n, m);

        switch (m)
        {
        case r:
            printf("lappy WINS\n");
            break;
        case s:
            printf("%c WINS\n", name);
            break;
        default:
            printf("it is a tie points are shared");
            break;
        }
        break;
    }

    return 0;
}
