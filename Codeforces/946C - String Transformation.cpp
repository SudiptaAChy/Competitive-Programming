#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    int n=s.size(),total=0;
    if(n<26) {cout<<"-1"; exit(0);}
    char ch='a';
    for(int i=0;i<n;i++)
    {
        if(s[i]<=ch)
        {
            s[i]=ch;
            ch++;
            total++;
            if(total==26) break;
        }
    }
    if(total==26) cout<<s;
    else cout<<"-1";
}
