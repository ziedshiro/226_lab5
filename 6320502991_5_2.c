#include<stdio.h>
int main()
{
    int n,i,j,k,x;
    scanf("%d",&n);
    k=n/2;
    if(n%2==0)
      k--;
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<i;j++)
            printf("_");
        printf("*");
    printf("\n");
    }



}
