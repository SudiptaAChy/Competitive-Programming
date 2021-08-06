#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
typedef long long ll;
const ll sz=1234567;
vector<int>a,b;
vector<pii>v;
int main()
{
    int n,k,vl,ans=INT_MAX,mxd=0;
    int tmpy;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>vl;
        a.push_back(vl);
    }
    for(int i=0;i<n;i++)
    {
        cin>>vl;
        b.push_back(vl);
        int d=b[i]/a[i];
        v.push_back(make_pair(d,i));
        ans=min(ans,d);
        if(d>mxd)
        {
            mxd=d;
            tmpy=i;
        }
    }
    sort(v.begin(),v.end());
    mxd=(b[tmpy]+k)/a[tmpy];
    vector<int>tmp;
    for(int an=mxd;an>=ans;an--)
    {
        int k1=k,i,tmpans=INT_MAX;
        tmp=b;
        for(i=0;i<n;i++)
        {
            int y=v[i].second;
            int x=a[y]*an;
            if(x>=b[y])
            {
                x=x-b[y];
                if(x<=k1)
                {
                    tmp[y]+=x;
                    k1-=x;
                    if(k1==0) break;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            tmpans=min(tmpans,(tmp[i]/a[i]));
        }
        if(tmpans==an)
        {
            cout<<an<<endl;
            return 0;
        }
    }
    ///main();
	return 0;
}
