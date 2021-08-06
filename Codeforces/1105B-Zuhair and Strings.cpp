#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s,t,len=0;
    string a;
    cin>>n>>k>>a;
    for(int j=0;j<26;j++)
    {
        char ch=j+'a';
        t=0,s=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==ch)
            {
                s++;
                if(s==k)
                {
                    s=0;
                    t++;
                }
            }
            else
                s=0;
        }
        len=max(t,len);
    }
    cout<<len;
    return 0;
}

