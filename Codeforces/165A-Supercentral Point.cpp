#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,k,j,o,o1,o2,o3,s=0;
    scanf("%d",&n);
    int x[n+1],y[n+1];
    for(i=0;i<n;i++)
       scanf("%d%d",&x[i],&y[i]);
    for(i=0;i<n;i++)
    {
        o=0,o1=0,o2=0,o3=0;
        for(j=i+1;j<n;j++)
        {
            if(x[j]>x[i] && y[j]==y[i])
            {
                o=1;
            }
            if(x[j]<x[i] && y[j]==y[i])
            {
                o1=1;
            }
            if(x[j]==x[i] && y[j]<y[i])
            {
                o2=1;
            }
            if(x[j]==x[i] && y[j]>y[i])
            {
                o3=1;
            }
        }
        for(k=i-1;k>=0;k--)
        {
            if(x[k]>x[i] && y[k]==y[i])
            {
                o=1;
            }
            if(x[k]<x[i] && y[k]==y[i])
            {
                o1=1;
            }
            if(x[k]==x[i] && y[k]<y[i])
            {
                o2=1;
            }
            if(x[k]==x[i] && y[k]>y[i])
            {
                o3=1;
            }
        }
        if(o==1 && o1==1 && o2==1 && o3==1)
            s++;
    }
    cout<<s;
}
