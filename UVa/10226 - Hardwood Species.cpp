#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,int>mp;
int main()
{
    int t;
    scanf("%d\n\n",&t);
    while(t--)
    {
        int total=0;
        set<string>st;
        set<string>::iterator it;
        string a;
        while(getline(cin,a))
        {
            if(a.size()==0) break;
            st.insert(a);
            mp[a]++;
            total++;
        }
        for(it=st.begin();it!=st.end();it++)
        {
            double ans=1.0*mp[*it]/total;
            ans*=100;
            cout<<*it<<" ";
            printf("%.4lf\n",ans);
        }
        if(t>0) cout<<endl;
        mp.clear();
    }
    return 0;
}
