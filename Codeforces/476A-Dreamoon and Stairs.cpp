#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,i,m,s1,s2,s3,min=100009,ok=0;
    cin>>n>>m;
    for(i=n/2;i>=0;i--)
    {
        s1=i+(n-i*2);
        ///cout<<s1<<endl;
        if(s1%m==0)
        {
            cout<<s1;
            ok=1;
            break;
        }
    }
    if(ok==0)
        cout<<"-1";
    return 0;
}
