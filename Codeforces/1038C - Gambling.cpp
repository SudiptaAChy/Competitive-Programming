#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1234567],b[1234567];
int s1,s2;
main()
{
    int n,v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int i=n-1,j=n-1,player1=1,player2=0;
    while(true)
    {
        if(i<0 && j<0)  break;
        if(player1==1 && player2==0)
        {
            if(a[i]>=b[j])
            {
                s1+=a[i];
                i--;
            }
            else j--;
            player1=0,player2=1;
        }
        else
        {
            if(b[j]>=a[i])
            {
                s2+=b[j];
                j--;
            }
            else i--;
            player1=1,player2=0;
        }
    }
    cout<<s1-s2;
}

