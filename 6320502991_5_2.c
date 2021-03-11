#include<stdio.h>
int main()
{
    int n,i,j,x,X,m,k;
    scanf("%d",&n);
    if(n%2==0)
    {
        x=n/2;
        X=n-1;
        for(i=0;i<x;i++)
    {
        for(j=0;j<X;j++)
        {
            if(j==x+i-1||j==x-i-1)
            printf("*");
            else
            printf("_");
        }
        printf("\n");
    }
        for(i=x;i>0;i--)
    {
        for(j=X;j>0;j--)
        {
            if(j==x+i-1||j==x-i-1)
            printf("*");
            else
            printf("_");
        }
        printf("\n");
    }
    }
    else
    {
    x=(n+1)/2;
    X=n;
    for(i=0;i<x;i++)
    {
        for(j=0;j<X;j++)
        {
            if(j==x+i-1||j==x-i-1)
            printf("*");
            else
            printf("_");
        }
        printf("\n");
    }
        for(i=x-1;i>0;i--)
    {
        for(j=X;j>0;j--)
        {
            if(j==x+i-1||j==x-i+1)
            printf("*");
            else
            printf("_");
        }
        printf("\n");

    }







    }
}
