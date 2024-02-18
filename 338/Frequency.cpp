#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<char,int>m;
    for(char c='a';c<='z';c++)
    {
        m[c]=0;
    }
    string s;
    cin>>s;
    int max=0;
    char maxc='0';
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
        if (m[s[i]] > max || (m[s[i]] == max && s[i] < maxc)) {
            max = m[s[i]];
            maxc = s[i];
        }

    }
    for(char c='a';c<='z';c++)
    {
        //cout<<c<<" "<<m[c]<<endl;
    }
    if(maxc=='0')   cout<<s[0];
    else    cout<<maxc;
    

}