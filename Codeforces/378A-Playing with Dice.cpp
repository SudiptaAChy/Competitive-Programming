#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int w=0,d=0,l=0,a,b;
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        if(abs(i-a)>abs(i-b))
            l++;
        else if(abs(i-a)<abs(i-b))
            w++;
        else
            d++;
    }
    cout<<w<<" "<<d<<" "<<l;
}
