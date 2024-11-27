#include<stdio.h>
struct student
{
    int id;
    int marks;
};

int main(int argc, char const *argv[])
{
    struct student happy,ravi,shubham;
    happy.id=1;
    ravi.id=2;
    shubham.id=3;
    ravi.marks=466;
   printf("happy id is %d\n", happy.id);


    return 0;
}
