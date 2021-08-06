#include<stdio.h>
int main()
{
    int n,i,a,p,sum=0,max=1000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&p);
        if(p<max)
            max=p;
        sum=sum+a*max;
    }
    printf("%d",sum);
}

