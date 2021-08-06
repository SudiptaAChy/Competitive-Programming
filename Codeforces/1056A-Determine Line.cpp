#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,r,man,a[10000]={0},i,d;
    scanf("%d",&n);
    d=n;
    while(n--)
    {
        scanf("%d",&r);
        while(r--)
        {
            scanf("%d",&man);
            a[man]++;
        }
    }
    for(i=1;i<=100;i++)
    {
        if(a[i]>=d)
            cout<<i<<" ";
    }
}
