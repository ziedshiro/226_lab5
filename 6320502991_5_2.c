#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n/2;
    if(n%2==0)
      k--;

    printf("%d",k);

}
