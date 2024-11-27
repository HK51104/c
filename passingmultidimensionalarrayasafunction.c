#include<stdio.h>

void func3(int arr[][2])
{
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j  < 2 ; j++)
    {
        printf("the value at %d and %d is %d\n",i,j,arr[i][j]);
    }
    // jabtk for loop (j waala) pooora complete nhi hojata (condition false) tabtk vo loop se bahar ahi niklega 
    printf("\n");
}

}

int main(int argc, char const *argv[])
{
    int arr[][2]={{5,2},{3,6}};
    // sirf ek bracket khaali chhodhh sakte ho doosre ka size mention karna hi padhta hai
    func3(arr);
    return 0;
}
