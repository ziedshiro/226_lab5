#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n/2;
    if(n%2==0)
      k--;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("_");
            if(j%2==0)
                printf("*");
            printf("_");
        }
    printf("\n");
    }
    printf("*");



}
