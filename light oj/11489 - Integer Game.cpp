#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a;
ll sum,size;
ll remv()
{
    ///for removing
    int allsam=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]!='x')
        {
            allsam=1; ///false
        }
    }
    if(allsam==0)
        return 3; ///invalid
    else
        return 2;
}
ll dvsbl()
{
    ///checking multiple of 3
    int div=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]!='x')
        {
            sum-=a[i]-'0';
            if(sum%3==0)
            {
                a[i]='x';
                div=1;
                ///cout<<" sum-> "<<sum<<endl;
                ///cout<<a<<endl;
                break;
            }
            else
            {
                sum+=a[i]-'0';
                ///cout<<" sum-> "<<sum<<endl;
            }
        }
    }
    if(div==0)
        return 3; ///invalid
    else
        return 2;
}
ll win()
{
    if(remv()==3 || dvsbl()==3)
        return 0;
    if(win()==0)
        return 1;
    return 0;
}
main()
{
    ll t,cas=1;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        cin>>a;
        size=a.size();
        printf("Case %lld: ",cas++);
        for(int i=0;i<size;i++) sum+=a[i]-'0';
        if(win()==1)
            printf("S\n");
        else
            printf("T\n");
    }
}
