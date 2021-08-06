#include<iostream>
using namespace std;
int main()
{
    int n,c,i,j,ma=0,s;
    cin>>n>>c;
    int a[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            s=a[i]-a[i+1]-c;
            if(s>ma)
                ma=s;
        }
    }
    cout<<ma;
}
