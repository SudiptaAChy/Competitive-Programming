#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 123456
#define pii pair<ll,ll>
#define inf 123456789
#define inf1 123456789
using namespace std;
typedef long long ll;
int dx[1009],dy[1009];
int main()
{
    int n,m,k1,k2;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>k1>>k2;
        dx[k1]=1;
        dx[k2]=1;
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++)
    {
        if(!dx[i])
        {
            for(int j=1;j<=n;j++)
            {
                if(i!=j)
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
            return 0;
        }
    }
}
