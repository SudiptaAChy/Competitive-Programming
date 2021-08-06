#include<bits/stdc++.h>
using namespace std;
int a[10009];
main()
{
    int n;
    double x,y,x1,y1;
    cin>>n>>x>>y;
    set<double>s;
    while(n--)
    {
        cin>>x1>>y1;
        if(!(x1-x))
        {
            s.insert(1000);
        }
        else
            s.insert((y1-y)/(x1-x));
    }
    cout<<s.size();
}
