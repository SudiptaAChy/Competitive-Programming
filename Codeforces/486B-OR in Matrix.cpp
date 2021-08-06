#include<bits/stdc++.h>
using namespace std;
int a[109][109];
int b[109][109];
int c[109][109];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<109;i++)
    {
        for(int j=0;j<109;j++) a[i][j]=1;
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>b[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i][j]==0)
            {
                for(int k=0;k<m;k++)
                    a[i][k]=0;
                for(int k=0;k<n;k++)
                    a[k][j]=0;

            }
        }
    }
    bool ok=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int ans1=0,ans2=0,ans;
            for(int k=0;k<m;k++)
                ans1=ans1|a[i][k];
            for(int k=0;k<n;k++)
                ans2=ans2|a[k][j];
            ans=ans1|ans2;
            if(ans!=b[i][j])
            {
                ok=false;
                break;
            }
        }
        if(ok==false) break;
    }
    if(ok==true)
    {
        cout<<"YES\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    else
         cout<<"NO";
}
