#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a[13],k,i,j,s=0,c=0;
    cin>>k;
    for(i=0;i<12;i++)
        cin>>a[i];
    if(k==0)
    {
        cout<<"0";
        return 0;
    }
    sort(a,a+12);
    for(i=11;i>=0;i--)
    {
        s+=a[i];
        c++;
        if(s>=k)
        {
            cout<<c;return 0;
        }
    }
    cout<<"-1";
    return 0;
}
