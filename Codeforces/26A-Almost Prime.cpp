#include<bits/stdc++.h>
using namespace std;
int s[40009];
vector<int>prime;
bool p[40009];
void pri(void)
{
    for(int i=1;i<3009;i++) p[i]=true;
    p[1]=false;
    for(int i=2;i*i<3009;i++)
    {
        for(int j=i*i;j<3009;j+=i)
        {
            if(p[i]==true)
                p[j]=false;
        }
    }
    for(int i=1;i<3009;i++)
        if(p[i]==true)
            prime.push_back(i);
}
void calc(void)
{
    pri();
    s[0]=0;
    s[1]=0;
    for(int i=2;i<=3002;i++)
    {
        int ok=0,cnt=0;
        for(int j=0;j<prime.size();j++)
        {
            if(i%prime[j]==0)
            {
                cnt++;
            }
        }
        if(cnt==2)
        {
            s[i]=s[i-1]+1;
        }
        else
            s[i]=s[i-1];
    }
}
main()
{
    calc();
    int n;
    cin>>n;
    cout<<s[n];
}
