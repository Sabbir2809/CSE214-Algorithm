#include<bits/stdc++.h>
using namespace std;
int lcs(string M,string N)
{
    int x=M.size(),y=N.size();
    int L[x+1][y+1];
    int i,j;
    for(i=0;i<=x;i++)
    {
        for(j=0;j<=y;j++)
        {
            if(i==0||j==0)
            L[i][j]=0;
            else if(M[i-1]==N[j-1])
            L[i][j]=L[i-1][j-1]+1;
            else
            L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }
    return L[x][y];
}
void solve()
{
    int total;
    cin>>total;
    string a,b;
    string tem;
    vector<string>v;
    getchar();
    for(int i=0;i<total;i++)
    {
        getline(cin,tem);
        v.push_back(tem);
    }
    int pp=0;
    for(int i=0;i<total-1;i++)
    {
        for(int j=i+1;j<total;j++)
        {
            int ss=lcs(v[i],v[j]);
            if(ss>pp)
            {
                a=v[i],b=v[j],pp=ss;
            }
        }
    }
    cout<<pp<<endl;
    cout<<a<<endl<<b<<endl;
}
int main()
{
    solve();
    return 0;
}