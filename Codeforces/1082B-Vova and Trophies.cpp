#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
char a[mx];
main()
{
    int i,j,n,ag=0,as=0,ma=0,l=0,fr=1,sc=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]=='G') ag++;
        else as++;
    }
    if(ag==n) cout<<n;
    else if(as==n) cout<<"0";
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]=='G')
                l++;
            else
            {
                ma=max(ma,l);
                l=0;
            }
        }
        ma=max(ma,l);
        l=0;
        for(i=0;i<n;i++)
        {
            if(a[i]=='G')
                l++;
            else
            {
                if(fr==1 && i+1!=n  && i!=0)
                {
                    fr=0;sc=1;l++;
                }
                else if(fr==0)
                {
                    ma=max(ma,l);
                    l=0;
                    fr=1;sc=0;
                }
            }
        }
        ma=max(ma,l);
        cout<<ma;
    }
}
/*

#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
char a[mx];
main()
{
    int i,j,n,ag=0,as=0,ma=0,l=0,fr=1,sc=0;
    int pos;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]=='G') ag++;
        else as++;
    }
    if(ag==n) cout<<n;
    else if(as==n) cout<<"0";
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]=='S')
            {
                if(i!=0 && i+1!=n)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(a[j]=='S')
                        {
                            if(j+1!=n)
                                pos=j-1;
                            else
                                pos=j+1;
                            break;
                        }
                    }
                    l+=pos-i;
                    ma=max(ma,l);
                    l=0;
                }
            }
            else
            {
                l++;
            }
        }
        cout<<ma;
    }
}


*/
