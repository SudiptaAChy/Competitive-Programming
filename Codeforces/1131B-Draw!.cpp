#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int draw=1,a,b;
    int pr1=0,pr2=0;
    while(n--)
    {
        cin>>a>>b;
        draw+=max(min(a,b)-max(pr1,pr2)+1,0);
        if(pr1==pr2) draw-=1;
        pr1=a;
        pr2=b;
    }
    cout<<draw;
}
