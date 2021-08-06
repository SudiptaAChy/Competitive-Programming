#include<stdio.h>
int a[1000009];
void find(int n,int hi)
{
    int lo=0,mid;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(n<=a[mid] && n>a[mid-1])
            break;
        if(n<a[mid])
            hi=mid-1;
        else
            lo=mid+1;
    }
    printf("%d\n",mid+1);
}
main(void)
{
    int n,m,i=0,j,num;
    int sum=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        a[i]=sum+num;
        sum+=num;
    }

    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&j);
        find(j,n);
    }
}
