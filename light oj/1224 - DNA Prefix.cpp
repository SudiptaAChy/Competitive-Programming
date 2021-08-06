#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b)
{
    return a.size()>b.size();
}
struct node {
    node *next[4];
    int cnt;
    node()
    {
        for(int i=0;i<4;i++) next[i]=NULL;
        cnt=0;
    }
} *root;
int ans;
void ins(string a)
{
    node *curr=root;
    int len=a.size();
    for(int i=0;i<len;i++)
    {
        int id;
        if(a[i]=='A') id=0;
        else if(a[i]=='C') id=1;
        else if(a[i]=='T') id=2;
        else if(a[i]=='G') id=3;
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
        curr->cnt+=1;
        ans=max(ans,curr->cnt*(i+1));
    }
}
void del(node *curr)
{
    for(int i=0;i<4;i++)
    {
        if(curr->next[i]!=NULL)
            del(curr->next[i]);
    }
    delete(curr);
}
int main()
{
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        vector<string>v;
        ans=0;
        root = new node();
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++)
        {
            ins(v[i]);
        }
        printf("Case %d: %d\n",cs,ans);
        del(root);
    }
    return 0;
}
