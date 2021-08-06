#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,x,m;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {
        deque<int>d;
        string a;
        printf("Case %d:\n",cas);
        cin>>n>>m;
        while(m--)
        {
            cin>>a;
            if(a=="pushLeft")
            {
                cin>>x;
                if(d.size()!=n)
                {
                    d.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
                else cout<<"The queue is full"<<endl;
            }
            else if(a=="pushRight")
            {
                cin>>x;
                if(d.size()!=n)
                {
                    d.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
                else cout<<"The queue is full"<<endl;
            }
            else if(a=="popLeft")
            {
                if(!d.empty())
                {
                    cout<<"Popped from left: ";
                    cout<<d.front()<<endl;
                    d.pop_front();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }
            else if(a=="popRight")
            {
                if(!d.empty())
                {
                    cout<<"Popped from right: ";
                    cout<<d.back()<<endl;
                    d.pop_back();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }
        }
    }
}
