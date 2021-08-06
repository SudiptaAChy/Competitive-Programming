#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t;
    string a;
    cin>>t;
    while(t--)
    {
        int mn,x1=0,x2=0;
        cin>>n>>a;
        if(a[0]=='>' || a[n-1]=='<') cout<<"0\n";
        else
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]=='>') break;
                else
                    x1++;
            }
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]=='<') break;
                else x2++;
            }
            cout<<min(x1,x2)<<endl;
        }
    }
}
