#include<bits/stdc++.h>
#define N 1009
#define pb push_back
using namespace std;
typedef long long ll;
bool f(int a,int b,int c)
{
    if(a+b>c && a+c>b && b+c>a) return true;
    return false;
}
void slv()
{
    int n;
    cin >> n;
    int a[n+3];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int pos=lower_bound(a,a+n,a[i]+a[j])-a-j-1;
            ans += pos;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin >> t;
    for(int cs=1;cs<=t;cs++)
    {
        printf("Case %d: ",cs);
        slv();
    }
    return 0;
}
