#include<bits/stdc++.h>
#define N 1009
#define pb push_back
using namespace std;
typedef long long ll;
int a[N],n,m;
bool f(int v)
{
    int s=0,cnt=1;
    for(int i=0;i<n;i++) {
        s += a[i];
        if(s > v) {
            cnt ++;
            s = a[i];
        }
    }
    return (cnt <= m);
}
void slv()
{
    cin >> n >> m;
    for(int i=0;i<n;i++) cin >> a[i];
    int lo=*max_element(a,a+n),hi=1e9;
    while (lo <= hi)
    {
        int mid=(lo+hi)/2;
        if(f(mid)) hi=mid-1;
        else lo=mid+1;
    }
    cout<<lo<<endl;
}
int main()
{
    int t;
    cin >> t;
    for(int cs=1;cs<=t;cs++)
    {
        printf("Case %d: ",cs);
        slv();
    }
    return 0;
}
