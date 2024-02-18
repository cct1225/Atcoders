#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    if(s[0]>='A'&&s[0]<='Z')
    {
        for(i=1;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')  continue;
            else
            {
            cout<<"No";
            break;
            }
        }
        if(i==s.size()) cout<<"Yes";
    }
    else  cout<<"No";
    
}