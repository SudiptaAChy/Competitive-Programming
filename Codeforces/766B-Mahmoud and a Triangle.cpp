#include<bits/stdc++.h>
using namespace std;
int a[3999999];
main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n-1;i++)
    {
        if(a[i-1]+a[i]>a[i+1])
        {
            puts("YES");
            return 0;
        }
    }
    cout<<"NO";
}
