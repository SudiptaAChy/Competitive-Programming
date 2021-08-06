#include<bits/stdc++.h>
using namespace std;
int point(int n)
{
    double x=sqrt(n*1.0);
    if(abs(x-floor(x))==0)
        return 0;
    else
        return 1;
}
main(void)
{
    int n,i,j,a,b,c;
    int total=0;
    cin>>n;
    ///int lim=ceil(sqrt(n));
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i*i+j*j<=n*n && point(i*i+j*j)==0)
                total++;
        }
    }
    cout<<total;
}
