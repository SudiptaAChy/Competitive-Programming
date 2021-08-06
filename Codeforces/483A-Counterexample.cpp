#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long l,r,i;
    long long a=0,b=0,c=0;
    cin>>l>>r;
    if(r-l+1<3)
    {
        cout<<"-1";
        return 0;
    }
    if(l%2==0)
        cout<<l<<" "<<l+1<<" "<<l+2;
    else
    {
        if(r-l+1==3)
            cout<<"-1";
        else
            cout<<l+1<<" "<<l+2<<" "<<l+3;
    }
}
