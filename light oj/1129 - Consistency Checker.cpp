#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node {
    bool endmark;
    node* next[12];
    node()
    {
        endmark=false;
        for(int i=0;i<12;i++) next[i]=NULL;
    }
}*root;
bool ins(string a)
{
    int len=a.size();
    int ok=0;
    node *curr=root;
    for(int i=0;i<len;i++)
    {
        int id=a[i]-'0';
        if(curr->next[id]==NULL)
        {
            curr->next[id]=new node();
        }
        else
        {
            ok++;
        }
        curr=curr->next[id];
    }
    curr->endmark=true;
    if(ok==len) return true;
    else return false;
}
bool cmp(string a,string b)
{
    return a.size()>b.size();
}
void del(node *curr)
{
    for(int i=0;i<10;i++)
        if(curr->next[i])
            del(curr->next[i]);
    delete (curr);
}
int main()
{
    int t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        root = new node();
        int n;
        cin>>n;
        vector<string>v;
        while(n--)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end(),cmp);
        bool ans=false;
        for(int i=0;i<v.size();i++)
        {
            ans=ins(v[i]);
            if(ans==true) break;
        }
        printf("Case %d: ",cs++);
        if(ans) puts("NO");
        else puts("YES");
        del(root);
    }
    return 0;
}
