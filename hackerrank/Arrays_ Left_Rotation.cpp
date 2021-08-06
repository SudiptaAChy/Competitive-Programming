#include<bits/stdc++.h>
using namespace std;
int a[1000009];
int main(void)
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=k;i<n;i++) cout<<a[i]<<" ";
    for(int i=0;i<k;i++) cout<<a[i]<<" ";
    return 0;
}
