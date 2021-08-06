#include<bits/stdc++.h>
#define mod 100000007
using namespace std;
typedef long long ll;
int sn,cn,lt,k,n;
int main()
{
    vector<char>v;
    string a;
    cin>>a>>k;
    n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]=='*') sn++;
        else if(a[i]=='?') cn++;
        else lt++;
    }
    ///cout<<sn<<" "<<cn<<" "<<lt<<endl;
    if(lt==k)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]>='a' && a[i]<='z') cout<<a[i];
        }
        return 0;
    }
    if(sn==0 && cn==0)
    {
        if(lt!=k)
        {
            puts("Impossible");
        }
        else cout<<a;
    }
    else
    {
        if(sn!=0)
        {
            int lt1=lt;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='?')
                    a[i-1]='1',lt1--;
            }
            ///cout<<"lt1 = "<<lt1<<endl;
            int d=k-lt1;
            d=max(0,d);
            if(lt1<k)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]>='a' && a[i]<='z') v.push_back(a[i]);
                    else if(a[i]=='*' && d!=0)
                    {
                        for(int l=0;l<d;l++)
                            v.push_back(a[i-1]);
                        d=0;
                    }
                }
                for(int i=0;i<v.size();i++) cout<<v[i];
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]=='*')
                    {
                        lt1--;
                        a[i-1]='1';
                        if(lt1==k) break;
                    }
                }
                for(int i=0;i<n;i++)
                {
                    if(a[i]>='a' && a[i]<='z') v.push_back(a[i]);
                }
                if(v.size()!=k)
                {
                    puts("Impossible");
                    return 0;
                }
                for(int i=0;i<v.size();i++) cout<<v[i];
            }
        }
        else
        {
            if(lt<k || lt-cn>k)
            {
                puts("Impossible");
            }
            else if(lt==k)
            {
                for(int i=0;i<n;i++) if(a[i]!='?') cout<<a[i];
            }
            else
            {
                int lt1=lt;
                for(int i=0;i<n;i++)
                {
                    if(a[i]=='?')
                    {
                        lt1--;
                        a[i-1]='1';
                        if(lt1==k) break;
                    }
                }
                for(int i=0;i<n;i++)
                {
                    if(a[i]>='a' && a[i]<='z') cout<<a[i];
                }
            }
        }
    }
    return 0;
}

