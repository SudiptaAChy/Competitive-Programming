#include<stdio.h>
int a[100009];
void rev(int st,int end)
{
    int t;
    while(st<end)
    {
        t=a[st];
        a[st]=a[end];
        a[end]=t;
        st++;
        end--;
    }
}
main(void)
{
    int t,no=1,i,tem;
    int n,m,d,y,z;
    char com[100];

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        while(m--)
        {
            scanf("%s",com);
            if(com[0]=='S')
            {
                scanf("%d",&d);
                for(i=0;i<n;i++) a[i]+=d;
            }
            if(com[0]=='M')
            {
                scanf("%d",&d);
                for(i=0;i<n;i++) a[i]*=d;
            }
            if(com[0]=='D')
            {
                scanf("%d",&d);
                for(i=0;i<n;i++) a[i]/=d;
            }
            if(com[0]=='R')
            {
                rev(0,n-1);
            }

            if(com[0]=='P')
            {
                scanf("%d%d",&y,&z);
                tem=a[y];
                a[y]=a[z];
                a[z]=tem;
            }
        }
        printf("Case %d:\n",no++);
        for(i=0;i<n-1;i++) printf("%d ",a[i]);
        printf("%d\n",a[n-1]);
    }
}
