#include<bits/stdc++.h>
using namespace std;
int s[30],n;
string a[100],b[100],pre;
void st()
{
    for(int i=0;i<n;i++)
        a[i]=b[i];
}
main()
{
    int mn=100000000,t;
    bool hobena;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i],b[i]=a[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<a[i].size();j++)
            s[a[i][j]-'a']++;
    for(int i=0;i<30;i++)
    {
        if(s[i]%n!=0)
        {
            cout<<"-1";
            return 0;
        }
    }
    int sz=a[0].size();
    for(int i=0;i<n;i++) ///jaat moto banater chai
    {
        hobena=false;
        t=0;
        st();
        for(int j=0;j<n;j++) ///row
        {
            if(i!=j)
            {
                pre=a[j];
                while(a[i]!=a[j])
                {
                    a[j]+=a[j][0];
                    a[j].erase(a[j].begin()+0);
                    t++;
                    if(a[j]==pre)
                    {
                        t=100000;
                        hobena=true;
                        break;
                    }
                }
            }
        }
        mn=min(mn,t);
    }
    if(hobena==true) cout<<"-1";
    else cout<<mn<<endl;
}
