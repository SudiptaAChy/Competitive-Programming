#include<bits/stdc++.h>
using namespace std;
int a[1000009];
main(void)
{
    int n,i,j,k,mx=0,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);
        a[j]=i;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        if(a[j]>mx)
        {
            t=a[j]-mx;
            mx=a[j];
        }
        else
            t=0;
        printf("%d ",t);
    }
}

