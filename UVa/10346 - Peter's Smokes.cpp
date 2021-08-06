#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d",&k);
        int ans=0;
        while(n>=k)
        {
            int d=n/k;
            ans+=d*k;
            n%=k;
            n+=d;
        }
        ans+=n;
        printf("%d\n",ans);
    }
    return 0;
}
