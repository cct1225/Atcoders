#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1||b==1||a==10||b==10)
    {
        if(a==1||b==1)    
        {
            if(a+b==11||a+b==3) cout<<"Yes";
            else cout<<"No";
        }
        else if(a==10||b==10)
        {
            if(a+b==11||a+b==19) cout<<"Yes";
            else cout<<"No";
        }
    }
    else
    {
        if(abs(a-b)==1) cout<<"Yes";
        else    cout<<"No";
    }
}