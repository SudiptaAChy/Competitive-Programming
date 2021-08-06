#include<bits/stdc++.h>
using namespace std;
int pallin(int n)
{
    int t=n,d=0,r;
    while(t>0)
    {
        r=t%10;
        d=d*10+r;
        t/=10;
    }
    if(d==n)
        return 0; ///true
    else
        return 1; ///false
}
int dig(int n)
{
    int to=0;
    while(n>0)
    {
        to++;
        n/=10;
    }
    if(to==2)
        return 0;
    else
        return 1;
}
main(void)
{
    int test,h,m,i,j,en;
    int d,n;
    char s;
    cin>>test;
    while(test--)
    {
        cin>>h>>s>>m;
        for(i=h;i<24;i++)
        {
            en=1;
            for(j=m+1;j<60;j++)
            {
                n=i*100+j;
                if(pallin(n)==0)
                {
                    if(dig(i)==1)
                        cout<<"0"<<i<<":";
                    else
                        cout<<i<<":";
                    if(dig(j)==1)
                        cout<<"0"<<j<<endl;
                    else
                        cout<<j<<endl;
                    en=0;
                    break;
                }
            }
            m=-1;
            if(en==0)
                break;
        }
        if(i==24)
            cout<<"00:00"<<endl;
    }
}
