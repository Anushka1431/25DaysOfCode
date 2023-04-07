//To find the nth armstrong number 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
    int n, count=1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n>31)
    {
        printf("Please enter a number less than or equal to 31");
        exit(1);
    }
    for (int i=1;i<=1000000000;i++)
    {
        int num=i, rem, sum=0;
        //count number of digits
        int digit= (int) log10(num)+1;

        while(num>0)
        {
            //find sum
            rem=num%10;
            sum=sum+pow(rem,digit);
            num=num/10;
        }
        //check for armstrong number
        if(i==sum)
        {
            if(count==n)
            {
                printf("%d\n",i);
                break;
            }
            else
            {
                count++;
            }
        }
    }
    
}