// POINTER

#include<stdio.h>

int main()
{
    int a=60;
    int* ptr=&a;
    // in this humne "ptr" ko bola hai tu point kar(store kar) "a" ka address 
    printf("the address of pointer to a is %p\n",&ptr);
    // isne humein "ptr" ka hi address bata diya
    printf("the value of a is %d\n",*ptr);
    // "*"ptr jo bhi "a" ki value hai vo likhne mein humari help karta hai
    // jis bhi cheez ka address stored hai "ptr" mein agr uss cheez ko print karana ha toh we use "*"
    printf("the address of a is %p\n",ptr);
    // sirf "ptr" humein address likhne mein help karta hai "a" ki
    //  kyuki jab humne "ptr" ko print karne bola,"ptr" mein toh "a" ka address hi stored hai
    return 0;
}
