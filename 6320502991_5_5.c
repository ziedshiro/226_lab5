#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    int x[n][n],X[m][m];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&x[i][j]);
    for(i=0;i<n;i++)
    {
        {
            for(j=i;j<m+i;j++)
                printf("%d",x[i][j]);

        }
        printf("\n");
    }


}
