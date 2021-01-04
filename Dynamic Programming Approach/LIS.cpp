#include <bits/stdc++.h>
using namespace std;
int lcs(string X,string Y)
{
    int m= X.size(),n= Y.size();
    int L[m + 1][n + 1];
    int i, j;


    for (i = 0; i <= m; i++)
        {
            for (j = 0; j <= n; j++)
                {
                    if (i == 0 || j == 0)
                        L[i][j] = 0;

                    else if (X[i - 1] == Y[j - 1])
                        L[i][j] = L[i - 1][j - 1] + 1;

                    else
                        L[i][j] = max(L[i - 1][j], L[i][j - 1]);
                }
        }

    return L[m][n];
}


void solve()
{
   int total;
   cin>>total;
   string a,b;

  string tem;

   vector<string >v;
   getchar();
   for ( int i=0;i<total ; i++)
   {
       getline(cin,tem);
       v.push_back(tem);


   }
   int pp=0;


   for ( int i=0;i<total-1;i++)
   {

       for ( int j=i+1;j<total;j++)
       {
           int xx= lcs(v[i],v[j]);
           if( xx>pp)
           {
               a=v[i],b=v[j],pp=xx;
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