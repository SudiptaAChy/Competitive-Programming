#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int c1,c2,c3,min=1000009;
    if(n%m==0)
    {
        c1=n/m*b;
        c2=n*a;
        if(c1<=c2)
            cout<<c1;
        else
            cout<<c2;
    }
    else
    {
        c1=ceil(n*1.0/m)*b;
        if(c1<=min)
            min=c1;
        c2=(n/m)*b+(n%m)*a;
        if(c2<=min)
            min=c2;
        c3=n*a;
        if(c3<=min)
            min=c3;
        cout<<min;
    }
    return 0;
}
