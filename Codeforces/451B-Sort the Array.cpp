#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(void)
{
    ll n,i,j,l=0,r=0;
    ll ok=0;
    ll de=0,in=0;
    scanf("%lld",&n);
    ll a[n+5];
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);
    if(n==1)
    {
        printf("yes\n1 1");
        return 0;
    }
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>=a[i+1])
            de=1;
        else
            in=1;
    }
    if(in==1 && de==0)
    {
        printf("yes\n1 1");ok=1;
    }
    else if(in==0 && de==1)
    {
        printf("yes\n1 %lld",n);ok=1;
    }
    else
    {
        for(i=1;i<=n-1;i++)
        {
            if(a[i]>a[i+1])
            {///cout<<"a = "<<l<<" "<<r<<endl;
                if(l==0)
                {
                    l=i;
                }
                else if(l!=0 && r!=0)
                {
                    l=0;
                    break;
                }
            }
            if(a[i]<a[i+1])
            {
                if(l!=0 && r==0)
                    r=i;
            }
        }///cout<<"l = "<<l<<endl<<"r = "<<r<<endl;
        if(r==0)
            r=n;
        if(l==0 || r==0)
        {
            printf("no");return 0;
        }
        if(r!=n)
        {
            if(a[l]<a[r+1])
            {
                ok=1;
                printf("yes\n%lld %lld",l,r);
            }
        }
        if(r==n)
        {
            if(a[l]>a[r] && a[r]>a[l-1])
            {
                ok=1;
                printf("yes\n%lld %lld",l,r);
            }
        }
        if(ok==0)
        {
            printf("no");return 0;
        }
    }
}
