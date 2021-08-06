#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k,i,j,total1=0,total2=0,sum;
    cin>>n>>k;
    int a[100009]; ///from 1st ; from middle ; from last
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<total1<<endl;
        cout<<a[0];
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        if(i+1==n)
        {
            if(a[i]+a[i-1]<k)
            {
                sum=k-a[i]-a[i-1];
                total1+=sum;
                a[i]+=sum;
            }
        }
        else
        {
            if(a[i]+a[i+1]<k)
            {
                sum=k-a[i]-a[i+1];
                total1+=sum;
                a[i+1]+=sum;
            }
        }
    }
    cout<<total1<<endl;
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
