#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,j,s;
    cin>>n;
    char a[n+1][n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s=0;
            if(a[i][j-1]=='o')
                s++;
            if(a[i][j+1]=='o')
                s++;
            if(a[i-1][j]=='o')
                s++;
            if(a[i+1][j]=='o')
                s++;
            if(s%2!=0)
            {
                cout<<"NO";
                exit(0);
            }
        }
    }
    cout<<"YES";
}
