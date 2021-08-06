#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,j,l;
    cin>>t;
    getchar();
    while(t--)
    {
        string a;
        stack<char>s;
        getline(cin,a);
        l=a.size();
        for(i=0;i<l;i++)
        {
            if(a[i]=='(' || a[i]=='[')
                s.push(a[i]);
            else if(a[i]==')')
            {
                if(s.empty()!=0 || s.top()!='(')
                    break;
                else
                    s.pop();
            }
            else if(a[i]==']')
            {
                if(s.empty()!=0 || s.top()!='[')
                    break;
                else
                    s.pop();
            }
        }
        if(i!=l || !s.empty()) cout<<"No\n";
        else cout<<"Yes\n";
    }
}
