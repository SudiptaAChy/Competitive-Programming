#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b)
{
    return a.size()>b.size();
}
struct node {
    node *next[2];
    int cnt;
    node()
    {
        for(int i=0;i<2;i++) next[i]=NULL;
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
        int id=a[i]-'0';
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
        curr->cnt+=1;
        ans=max(ans,curr->cnt*(i+1));
    }
}
void del(node *curr)
{
    for(int i=0;i<2;i++)
        if(curr->next[i]!=NULL)
            del(curr->next[i]);
    delete(curr);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>v;
        root=new node();
        int n;
        ans=0;
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
        cout<<ans<<endl;
        del(root);
    }
    return 0;
}
