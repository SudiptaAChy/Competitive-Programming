#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,m,i,j,k;
    int ok=0,ok1=0,ok2=0,ok3=0;
    scanf("%d%d",&n,&m);
    int a[n+1],b[m+1];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    sort(a,a+n);
    sort(b,b+m);
    for(j=a[n-1];j<b[0];j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]<=j)
                ok=1;
            else
            {
                ok=0;
                break;
            }
        }
        for(i=0;i<m;i++)
        {
            if(b[i]>j)
                ok1=1;
            else
            {
                ok1=0;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(2*a[i]<=j)
            {
                ok2=1;break;
            }
        }
        if(ok==1 && ok1==1 && ok2==1)
        {
            ok3=1;
            break;
        }
    }
    if(ok3==0) printf("-1");
    else
    printf("%d",j);
}
