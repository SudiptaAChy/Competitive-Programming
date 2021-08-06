/*#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
main()
{
    string s,t;
    vector<int>v;
    int i,j,k,l=0,n;
    int pos;
    cin>>n>>s>>t;
    if(s==t)
    {
        puts("0");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        a[s[i]-96]++;
        b[t[i]-96]++;
    }
    for(i=0;i<28;i++)
    {
        if(a[i]!=b[i])
        {
            puts("-1");
            return 0;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(s[i]!=t[i])
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i]==t[j])
                {
                    pos=j;
                    break;
                }
            }
            for(k=i;k<pos;k++)
            {
                v.push_back(k+1);
                swap(s[k],s[k+1]);
            }
        }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();++i) cout<<v[i]<<" ";
    cout<<endl<<s;
}
*/


#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
main()
{
    string s,t;
    vector<int>v;
    int i,j,k,l=0,n;
    int pos;
    cin>>n>>s>>t;
    if(s==t)
    {
        puts("0");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        a[s[i]-96]++;
        b[t[i]-96]++;
    }
    for(i=0;i<28;i++)
    {
        if(a[i]!=b[i])
        {
            puts("-1");
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            for(j=i+1;j<n;j++)
            {
                if(s[j]==t[i])
                {
                    pos=j-1;
                    break;
                }
            }
            for(j=pos;j>=i;j--)
            {
                swap(s[j],s[j+1]);
                v.push_back(j+1);
            }
        }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)cout<<v[i]<<" ";
}
