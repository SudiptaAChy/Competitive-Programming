#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,ans=0;
    cin>>n;
    while(n--)
    {
        int a;
        char ch;
        cin>>ch>>a;
        if(ch=='+') s.insert(a);
        else
        {
            if(s.find(a)==s.end())
                ans++;
            else
                s.erase(a);
        }
        ans=max(ans,(int)s.size());
    }
    cout<<ans;
    return 0;
}
