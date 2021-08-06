#include <bits/stdc++.h>
#define N 200009
using namespace std;
typedef long long ll;
int main()
{
//    freopen("in.txt", "r", stdin);
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && h2==0 && m1==0 && m2==0) break;
        int d1=h1*60+m1;
        int d2=h2*60+m2;
        if(d1>d2) d2+=1440;
        cout<<d2-d1<<endl;
    }
    return 0;
}
