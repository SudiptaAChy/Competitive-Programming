#include<bits/stdc++.h>
#define N 10009
#define pb push_back
using namespace std;
typedef long long ll;
int n,k,a[N];
bool f(int v)
{
    int s=0,cnt=1;
    for(int i=0;i<=n;i++) {
        s += a[i];
        if(s > v) {
            cnt ++;
            s = a[i];
        }
    }
    return (cnt-1 <= k);
}
void slv()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<=n;i++) scanf("%d",&a[i]);
    int lo=*max_element(a,a+n+1),hi=1e9;
    while (lo <= hi)
    {
        int mid=(lo+hi)/2;
        if(f(mid)) hi=mid-1;
        else lo=mid+1;
    }
    printf("%d\n",lo);
    int s=0,cnt=0;
    for(int i=0;i<=n;i++) {
        if(n+1-i == k+1-cnt) {
            printf("%d\n",a[i]);
            cnt ++;
        } else {
            s = a[i];
            while (i+1<=n && s+a[i+1]<=lo && n-i!=k-cnt)
            {
                s += a[i+1];
                i++;
            }
            cnt ++;
            printf("%d\n",s);
        }
    }
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
