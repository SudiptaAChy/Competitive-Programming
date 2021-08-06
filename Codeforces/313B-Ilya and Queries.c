#include<iostream>
using namespace std;

char s[1000009];
int a[1000009],sum[1000009];

main(void)
{
    int i,j,k,m,total;
    int l,r;

    cin>>s;

    for(i=1;s[i];i++)
    {
        if(s[i-1]==s[i])
            a[i]=1;
        else
            a[i]=0;
    }

    sum[0]=0;

    for(i=1;s[i];i++)
    {
        sum[i]=sum[i-1]+a[i];
    }

    cin>>m;

    while(m--)
    {
        cin>>l>>r;
        cout<<sum[r-1]-sum[l-1]<<endl;
    }
}
