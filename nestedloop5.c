//print given number of tables within given range 
#include<stdio.h>
int main()
{
    int i, j, n, k;
    printf("enter number of tables:");
    scanf("%d",&n);
    printf("enter range: ");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;

}