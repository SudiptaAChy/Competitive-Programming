#include <bits/stdc++.h>
#define N 200009
using namespace std;
typedef long long ll;
int main()
{
//    freopen("in.txt", "r", stdin);
    int n;
    int lo=0,hi=100;
    while(cin>>n)
    {
        getchar();
        if(!n) break;
        string s;
        getline(cin,s);
        if(s=="too high") hi=min(hi,n);
        else if(s=="too low") lo=max(lo,n);
        else
        {
            if(n>lo && n<hi && lo<hi) puts("Stan may be honest");
            else puts("Stan is dishonest");
            lo=0,hi=100;
        }
    }
    return 0;
}
