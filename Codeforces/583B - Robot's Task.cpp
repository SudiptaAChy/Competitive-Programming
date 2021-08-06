#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[123456],s[123456],mx=0;
void show(int n)
{
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int all=0,to=0,info=0;
    while(true)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]!=-1)
            {
                if(info>=a[i])
                {
                    info+=1;
                    a[i]=-1;
                    all++;
                }
            }
        }
        if(to!=0) to++;
        if(all>=n) break;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]!=-1)
            {
                if(info>=a[i])
                {
                    info+=1;
                    a[i]=-1;
                    all++;
                }
            }
        }
        to++;
        if(all>=n) break;
    }
    cout<<to;
}
