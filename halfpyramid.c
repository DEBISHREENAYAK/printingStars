#include<stdio.h>
void main()
{
    int i,n,j,row;
    printf("enter a number");
    scanf("%d",&row);
    
    for(i=0;i<=row;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
