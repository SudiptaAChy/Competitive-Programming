#include<bits/stdc++.h>
using namespace std;
main(void)
{
    string a;
    int i,j,k;
    cin>>a;
    for(i=0;i<a.length();i++)
    {
        if(a[i]=='.')
            cout<<"0";
        else if(a[i]=='-' && a[i+1]=='.')
        {
            cout<<"1";
            i++;
        }
        else if(a[i]=='-' && a[i+1]=='-')
        {
            cout<<"2";
            i++;
        }
    }
}
