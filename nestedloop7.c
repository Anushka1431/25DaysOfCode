//Find the Nth prime number

#include <stdio.h>

int main()
{
    int num, i, primecount=0, flag, primenumber=1;
    printf("enter the number: ");
    scanf("%d", &num);

    while(num!=primecount)
    {
        flag=0;
        primenumber++;
        for(i=2;i<(primenumber/2);i++)
        {
            if(primenumber%i==0)
                flag=1;
            
        }
        if(flag==0)
            primecount++;
    }
    printf("%d prime number is %d", num, primenumber);
    return 0;
}
