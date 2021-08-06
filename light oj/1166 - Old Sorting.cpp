#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n,a[123],b[123],boro=1;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                boro=0;
                break;
            }
        }
        if(boro==1) printf("Case %d: 0\n",cs);
        else
        {
            sort(b,b+n);
            int total=0;
            for(int i=0;i<n;i++)
            {
                if(b[i]==a[i]) continue;
                for(int j=i+1;j<n;j++)
                {
                    if(b[i]==a[j])
                    {
                        total++;
                        swap(a[j],a[i]);
                        break;
                    }
                }
            }
            printf("Case %d: %d\n",cs,total);
        }
    }
}

