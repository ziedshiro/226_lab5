#include<stdio.h>
int main()
{
    int n,i=0,k=0;
    scanf("%d",&n);
    do
    {
       k++;
        if(k%2==0||k%3==0||k%5==0)
            i++;
    }while(i!=n);
    printf("%d",k);
}
