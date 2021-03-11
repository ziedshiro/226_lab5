#include<stdio.h>
int main()
{
    int n,i=0,k=0,z,x;
    scanf("%d",&n);
    do
    {
       k++;
       if(k>1)
        {
           z=k;
           x=2;
        do
        {
            if(z%x==0)
                z/=x;
            else
                x++;
        }while(z!=1);
        }
        if(k==1||x<=5)
            i++;
    }while(i!=n);
    printf("%d",k);
}
