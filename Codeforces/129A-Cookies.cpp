#include <iostream>
#include <algorithm>
using namespace std;
int a[1000];
int main()
{
    int n,i,j,t=0,s=0,s1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        a[j]++;
        s+=j;
    }
    for(i=1;i<=100;i++)
    {
        if(a[i]!=0)
        {
            s1=s-i;
            if(s1%2==0)
                t+=a[i];
        }
    }
    cout<<t;
}
