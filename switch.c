// SWITCH CASE


#include <stdio.h>

int main(int argc, char const *argv[])

{
  int age, marks;

  printf("enter your age\n");
  scanf("%d", &age);

  printf("enter your marks\n");
  scanf("%d", &marks);

  switch (age)
  {
  case 3:
    printf("the age is 3\n");
    switch (marks)
    {
    case 45:
      printf("your marks are 45\n");
      break;

    default:
      printf("your marks are not 45\n");
      break;
    }
    break;

  case 13:
    printf("the age is 13\n");
    switch (marks)
    {
    case 45:
      printf("your marks are 45\n");
      break;

    default:
      printf("your marks are not 45\n");
      break;
    }
    break;

  case 23:
    printf("the age is 23\n");
    switch (marks)
    {
    case 45:
      printf("your marks are 45\n");
      break;

    default:
      printf("your marks are not 45\n");
      break;
    }
    break;

  default:
    printf("the age is not 3,13,23");
    break;
  }

  return 0;
}
