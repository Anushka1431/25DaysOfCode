// Write a program to take N as input and print the odd numbers in descending order. 
#include <stdio.h>
int main()
{
    int n, i, a;
    printf("enter a number: ");
    scanf("%d",&n);

    for(i=n-1;i>=0;i--)
    {
        a=1+i*2;
        printf("%d ",a);

    }
    return 0;
}
