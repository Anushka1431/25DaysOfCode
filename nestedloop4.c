//pattern 4
#include<stdio.h>

int main()
{
    int i, j, x=2, y=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d ", x);
                x+=2;
            }
            else if(i%2!=0)
            {
                printf("%d ",y);
                y+=2;
            }
        }
        printf("\n");
    }
    return 0;
}