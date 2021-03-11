#include<stdio.h>
int main()
{
    int n,i,j,x,X,m;
    scanf("%d",&n);
    x=n/2;
    if(n%2==0)
        x--;
    for(i=0;i<x;i++)
        printf("_");
    printf("*");
    for(i=0;i<x;i++)
        printf("_");
    if(n%2==0)
    {

        for(j=0;j<2;j++)
        {
        printf("*");
        for(i=0;i<n/2;i++)
        printf("*");
        }



    }
    else
    {


        printf("*");
        for(i=0;i<(n/2)+1;i++)
        printf("*");

    }





    for(i=0;i<x;i++)
        printf("_");
    printf("*");
    for(i=0;i<x;i++)
        printf("_");








}
