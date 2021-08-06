#include<bits/stdc++.h>
using namespace std;
int n,i,n1,n2,n3,n4,n6,j;
int main(void)
{
    cin>>n;
    int mil=0;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            n1++;
        else if(a[i]==2)
            n2++;
        else if(a[i]==3)
            n3++;
        else if(a[i]==4)
            n4++;
        else if(a[i]==6)
            n6++;
    }
    int lim=n/3;
    for(i=0;i<lim;i++)
    {
        if(n2!=0 && n4!=0)
        {
            cout<<"1 2 4";
            n2--,n4--;
            mil=1;
        }
        else if(n2!=0 && n6!=0)
        {
            cout<<"1 2 6";
            n2--,n6--;
            mil=1;
        }
        else if(n3!=0 && n6!=0)
        {
            cout<<"1 3 6";
            n3--,n6--;
            mil=1;
        }
        if(mil==1) cout<<endl;
        else
        {
            cout<<"-1";
            return 0;
        }
    }
}
