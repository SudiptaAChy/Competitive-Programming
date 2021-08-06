#include <bits/stdc++.h>
#define mx 1000009
using namespace std;
int c[109],d[109];
deque<int>a,b,a1,b1;
bool check(void)
{
    deque<int>::iterator it,it1;
    bool ok=true;
    for(it=a.begin(),it1=a1.begin();it!=a.end(),it1!=a1.end();it++,it1++)
    {
        if(a.size()!=a1.size() || *it!=*it1)
        {
            ok=false;
            break;
        }
    }
    for(it=b.begin(),it1=b1.begin();it!=b.end(),it1!=b1.end();it++,it1++)
    {
        if(b.size()!=b1.size() || *it!=*it1)
        {
            ok=false;
            break;
        }
    }
    return ok;
}
int main()
{
    int n,k1,k2,total=0,ans;
    cin>>n>>k1;
    for(int i=0;i<k1;i++)
    {
        cin>>c[i];
        a.push_back(c[i]);
        a1.push_back(c[i]);
    }
    cin>>k2;
    for(int i=0;i<k2;i++)
    {
        cin>>d[i];
        b.push_back(d[i]);
        b1.push_back(d[i]);
    }
    while(true)
    {
        if(a.empty() || b.empty()) break;
        total++;
        int x=a.front();
        int y=b.front();
        a.pop_front();
        b.pop_front();
        if(x>y)
        {
            a.push_back(y);
            a.push_back(x);
            ans=1;
        }
        else
        {
            b.push_back(x);
            b.push_back(y);
            ans=2;
        }
        if(total==mx)
        {
            cout<<"-1";
            return 0;
        }
//        if(check()==true)
//        {
//            cout<<"-1";
//            return 0;
//        }
    }
    cout<<total<<" "<<ans;
    return 0;
}

