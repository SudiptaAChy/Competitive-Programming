#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,i,j,hh,mm;
    int ph,pm;
    int cash=1;
    cin>>n;
    cin>>ph>>pm;
    n-=1;
    int max=1;
    while(n--)
    {
        cin>>hh>>mm;
        if(ph==hh)
        {
            if(mm-pm<1)
                cash++;
            else
                cash=1;
        }
        else
            cash=1;
        if(cash>max)
            max=cash;
        ph=hh,pm=mm;
    }
    cout<<max;
    return 0;
}
