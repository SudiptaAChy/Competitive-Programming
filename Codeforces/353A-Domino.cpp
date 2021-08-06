#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
main(void)
{
    int n,i,j;
    cin>>n;
    int s1=0,s2=0,t=0,t1=0,ok=0;
    int d1,d2;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        s1+=a[i];
        s2+=b[i];
    }
    if(s1%2==0 && s2%2==0)
        t=0;
    else
    {
        d1=s1,d2=s2;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                s1-=a[i]+b[i];
                s2-=b[i]+a[i];
                if(s1%2==0 && s2%2==0)
                {
                    t++;break;
                }
                else
                {
                    t=0;s1=d1,s2=d2;
                }
            }
        }
        if(t==0)
        {
            cout<<"-1";
            return 0;
        }
    }
    cout<<t;
}
