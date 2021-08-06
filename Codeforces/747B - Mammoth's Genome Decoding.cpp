#include<bits/stdc++.h>
using namespace std;
int s[4];
main()
{
    int n,t,mx=0;
    string a;
    cin>>n>>a;
    if(n%4!=0)
    {
        puts("===");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            s[0]++;
        }
        else if(a[i]=='C')
        {
            s[1]++;
        }
        else if(a[i]=='G')
        {
            s[2]++;
        }
        else if(a[i]=='T')
        {
            s[3]++;
        }
    }
    mx=n/4;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='?')
        {
            if(s[0]<mx)
            {
                a[i]='A';
                s[0]++;
            }
            else if(s[1]<mx)
            {
                a[i]='C';
                s[1]++;
            }
            else if(s[2]<mx)
            {
                a[i]='G';
                s[2]++;
            }
            else if(s[3]<mx)
            {
                a[i]='T';
                s[3]++;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        if(s[i]!=mx)
        {
            puts("===");
            return 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='?')
        {
            puts("===");
            return 0;
        }
    }
    cout<<a;
}
