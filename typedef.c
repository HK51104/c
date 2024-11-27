#include <stdio.h>
typedef struct student
{
    int id;
    int marks;
} std;

int main(int argc, char const *argv[])
{
    struct student s1, s2;
    s1.id = 5;
    s2.id = 9;
    return 0;
}
