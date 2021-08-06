#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[1009][1009];
int main()
{
    int n,m,i,j,ca=0,cb=0,cc=0,cd=0,ca1=0,cb1=0,cc1=0,cd1=0;
    int l1=0,l2=0;
    cin>>n>>m;
    for(i=0;i<n;i++) cin>>a[i];
    int bl=0,wh=0;
    int frs=0,sc=0,th=0,fr=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j-1]=='W' && a[i][j]=='B' || (a[i][j]=='B' && (i==0 || j==0)))
            {
                if(frs==0)
                {
                    ca=i+1,ca1=j+1;
                    frs=1; ///1st point
                }
                else
                {
                    cc=i+1,cc1=j+1;
                    th=1; ///3rd point
                }
            }
            if(a[i][j]=='B' && a[i][j+1]=='W' || (a[i][j]=='B' && (i+1==n || j+1==m)))
            {
                if(sc==0)
                {
                    cb=i+1,cb1=j+1;
                    sc=1; ///2nd pont
                }
                else
                {
                    cd=i+1,cd1=j+1;
                    fr=1; ///4th point
                }
            }
        }
    }
    if(ca==cb && ca1==cb1 && cc==0 && cc1==0 && cd==0 && cd1==0)
        cout<<ca<<" "<<ca1;
    else
    {
        if(ca1!=cc1)
        {
            if(ca1<cc1)
                cc1=ca1;
            else
                ca1=cc1;
        }
        if(cb1!=cd1)
        {
            if(cb1<cd1)
                cd1=cb1;
            else
                cb1=cd1;
        }
        l1=abs(ca1-cb1);
        l2=abs(ca-cc);
        if(l1%2!=0)
        {
            l1-=1;
            cb1-=1;
        }
        if(l2%2!=0)
        {
            l2-=1;
            cc-=1;
        }
        if(l1!=l2)
        {
            int dis=abs(l1-l2);
            if(l1<l2)
            {

                ca-=dis;
            }
            else
            {
                cb1-=dis;
            }
        }
        cout<<(ca+cc)/2<<" "<<(ca1+cb1)/2;
    }
}

