#include<bits/stdc++.h>
using namespace std;
main()
{
    string a;
    cin>>a;
    if(a.find("AB")!=-1 && a.find("BA",a.find("AB")+2)!=-1) cout<<"YES";
    else if(a.find("BA")!=-1 && a.find("AB",a.find("BA")+2)!=-1) cout<<"YES";
    else cout<<"NO";
}
