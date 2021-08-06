#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,v,i,j,t=0,nm=0;
    cin>>n>>v;
    int q[1000009],k[1000009],s[100][1009];
    for(i=0;i<n;i++)
    {
        cin>>k[i];
        for(j=0;j<k[i];j++)
            cin>>s[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<k[i];j++)
        {
            if(s[i][j]<v)
            {
                t++;
                q[nm++]=i+1;
                break;
            }
        }
    }
    cout<<t<<endl;
    for(i=0;i<t;i++)
        cout<<q[i]<<" ";
}
