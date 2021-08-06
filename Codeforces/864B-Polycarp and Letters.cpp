#include<bits/stdc++.h>
using namespace std;
int s[30];
int n;
string a;
int len(int x,int y)
{
    ///cout<<x<<" "<<y<<endl;
    memset(s,0,sizeof s);
    int t=0;
    for(int i=x;i<=y;i++)
    {
        s[a[i]-'a']=1;
    }
    for(int i=0;i<30;i++)
        if(s[i]==1) t++;
    return t;
}
main()
{
    int ans=0,i,j;
    cin>>n>>a;
    if(n==1)
    {
        if(a[0]>='a' && a[0]<='z')
            ans=1;
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]>='A' && a[j]<='Z')
                {
                    ans=max(ans,len(i,j-1));
                    break;
                }
            }
            if(j==n)
                ans=max(ans,len(i,n-1));
        }
    }
    cout<<ans;
}
