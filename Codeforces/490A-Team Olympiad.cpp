#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,pr=0,ma=0,pe=0,mini;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1) pr++;
        else if(a[i]==2) ma++;
        else pe++;
    }
    mini=min(pr,ma);
    mini=min(mini,pe);
    cout<<mini<<endl;
    if(mini==0)
        return 0;
    for(i=0;i<mini;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==1)
            {
                cout<<j+1<<" ";
                a[j]=-1;
                break;
            }
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==2)
            {
                cout<<j+1<<" ";
                a[j]=-1;
                break;
            }
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==3)
            {
                cout<<j+1<<" ";
                a[j]=-1;
                break;
            }
        }
        cout<<endl;
    }
}
