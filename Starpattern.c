#include <stdio.h>
void StarPattern(int rows)
// humein in return kuch nahi chahiye hum seedha print kardenge screen par tabhi humne "void" use kara hai
{
    for (int i = 0; i < rows; i++)
    // whatever we use here we need to declare it first (in this case "rows")
    // this loop tells us about the no. of rows we can have
    // "i" is considered to be rows
    // jitni baar "i" chalega utni baar rows banegi
    //"i" utni baar chalega jitni baaar "i<rows" hoga,, for eg "i=0","i=1" dono hi "rows=2" se chhote hai therefore "i" do baar chalega
    {
        for (int j = 0; j <= i; j++)
        // jitni baar "j" chalega utni baar "*" print hoga
        // "j" utni baar chalega jitni baar yeh condition true hogi "j<=i"
        // when "i=1", j do baaar chalega that is "j=0","j=1"
        {
            printf("*");
            // kyuki humne star ko j waaale for loop mein print karaya hai isliye hi jitni baar j print hoga = kitni baar star print hoga
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf("*");
            // iss loop se tabtk bahar nahi niklenge jabtk yeh false nhi hojata means ki "j++" hota rhega jbtk false nhi ho jaati condition
            // since "for loop of j" is the body of "for loop of i", therefore jabtk body poori tarah se run nahi ho jaati tbtk increment nhi hoga (i++)
            // this logic is solely based on working of "for looop" line by line
        }

        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int rows;
    printf("enter the no. of rows you want\n");
    scanf("%d", &rows);
    StarPattern(rows);
    reversestarpattern(rows);
    return 0;
}
