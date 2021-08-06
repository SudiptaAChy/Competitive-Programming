#include<bits/stdc++.h>
using namespace std;
main()
{
    string a;
    int n,p;
    cin>>n>>p>>a;
    for(int i=0;i<n-p;i++)
    {
        if(a[i]=='.')
        {
            if(a[i+p]=='.')
            { ///..
                a[i+p]='0';
                a[i]='1';
            }
            else
            { ///.1 .0
                if(a[i+p]=='1')
                    a[i]='0';
                else
                    a[i]='1';
            }
        }
        else
        { ///1. 0.
            if(a[i+p]=='.')
            {
                if(a[i]=='1') a[i+p]='0';
                else a[i+p]='1';
            }
        }
    }
    ///cout<<a<<endl;
    bool t=false;
    for(int i=0;i<n-p;i++)
    {
        if(a[i]!=a[i+p])
        {
            t=true;
            break;
        }
    }
    if(t==false)
    {
        puts("NO");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='.') cout<<"0";
        else cout<<a[i];
    }
}
