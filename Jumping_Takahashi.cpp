#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,goal;
    cin>>n>>goal;
    int a[101],b[101];
    int f[n+10][goal+10];//走i步到達j
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    memset(f, 0, sizeof f);
    f[0][0]=1;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=goal;j++)
        {
            if(f[i][j]==1)
            {
                if(j+a[i]<=goal)    f[i+1][j+a[i]]=1;
                if(j+b[i]<=goal)    f[i+1][j+b[i]]=1;
            }
        }
    }

    if(f[n][goal]==1)   cout<<"Yes";
    else    cout<<"No";
}