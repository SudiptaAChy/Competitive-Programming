#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string a1="BGR",a2="BRG",a3="GBR",a4="GRB",a5="RGB",a6="RBG";
int chck(string a,string b,int n)
{

}
int main()
{
    int n,t=0,mn=12345678,rs;
    string a,ans,b="";
    cin>>n>>a;
    for(int i=0;i<n;i++)
    {
        b+=a1[i%3];
    }
    rs=chck(a,b,n);
    if(rs<mn)
    {
        mn=rs;
        ans=b;
    }
    b="";
    for(int i=0;i<n;i++)
    {
        b+=a2[i%3];
    }
    b="";
    for(int i=0;i<n;i++)
    {
        b+=a3[i%3];
    }
    b="";
    for(int i=0;i<n;i++)
    {
        b+=a4[i%3];
    }
    b="";
    for(int i=0;i<n;i++)
    {
        b+=a5[i%3];
    }
    b="";
    for(int i=0;i<n;i++)
    {
        b+=a6[i%3];
    }
    return 0;
}
