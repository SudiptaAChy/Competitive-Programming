#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int n=a.size();
        int d=0,u=0,l=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='0' && a[i]<='9') d++;
            if(a[i]>='A' && a[i]<='Z') u++;
            if(a[i]>='a' && a[i]<='z') l++;
        }
        if(d>0 && u>0 && l>0) cout<<a<<endl;
        else
        {
            if(d==0)
            {
                if(u>l)
                {
                    for(int i=0;i<n;i++)
                    {
                        if(a[i]>='A' && a[i]<='Z')
                        {
                            a[i]='1';
                            u--;
                            break;
                        }
                    }
                }
                else
                {
                    for(int i=0;i<n;i++)
                    {
                        if(a[i]>='a' && a[i]<='z')
                        {
                            a[i]='1';
                            l--;
                            break;
                        }
                    }
                }
            }
            if(u==0)
            {
                if(d>l)
                {
                    for(int i=0;i<n;i++)
                    {
                        if(a[i]>='0' && a[i]<='9')
                        {
                            d--;
                            a[i]='A';
                            break;
                        }
                    }
                }
                else
                {
                    for(int i=0;i<n;i++)
                    {
                        if(a[i]>='a' && a[i]<='z')
                        {
                            l--;
                            a[i]='A';
                            break;
                        }
                    }
                }
            }
            if(l==0)
            {
                if(d>u)
                {
                    for(int i=0;i<n;i++)
                    {
                        if(a[i]>='0' && a[i]<='9')
                        {
                            d--;
                            a[i]='a';
                            break;
                        }
                    }
                }
                else
                {
                    for(int i=0;i<n;i++)
                    {
                        if(a[i]>='A' && a[i]<='Z')
                        {
                            u--;
                            a[i]='a';
                            break;
                        }
                    }
                }
            }
            cout<<a<<endl;
        }
    }
}
