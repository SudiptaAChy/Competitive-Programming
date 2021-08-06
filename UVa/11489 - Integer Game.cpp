#include<bits/stdc++.h>
using namespace std;
int getsum(string a)
{
    int s=0;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        s+=(a[i]-'0');
    }
    return s;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        string a;
        cin>>a;
        int sum=getsum(a);
        bool fr=0,sc=1;
        int mv=0;
        while(true)
        {
            bool ok=0;

            for(int i=0;i<a.size();i++)
            {
                int x=a[i]-'0';
                if((sum-x)%3==0)
                {
                    a.erase(a.begin()+i);
                    ok=1;
                    mv++;
                    sum=sum-x;
                }
            }
            if(ok==0 || a.size()==0) break;
        }
        //cout<<mv<<endl;
        if(mv==0 || mv%2==0) printf("Case %d: T\n",cs);
        else printf("Case %d: S\n",cs);
    }
    return 0;
}
