# include<bits/stdc++.h>

using namespace std;

void Les_Length(char X[],char Y[],int m,int n){
    
    int c[m+1][n+1];
  
    for(int i=0;i<=m;i++)
      {
          for(int j=0;j<=n;j++){
              
              if(i==0||j==0){
              c[i][j]=0;
              }  
              else if(X[i-1]==Y[j-1]){
              c[i][j]=c[i-1][j-1]+1;
              }
              else if(c[i-1][j]>=c[i][j-1]){
                c[i][j]=c[i-1][j];
               }
                else{
                c[i][j]=c[i][j-1];
                }
          }
      }
       for(int i=0;i<=m;i++){
           
          for(int j=0;j<=n;j++){
              
              cout<<c[i][j]<<" ";
          }
          cout<<endl;
      }
     cout<<c[m][n]<<endl;
}

int main(){

    int N;
    cin>> N;

    string str[N];
    int i;
    for(i = 0; i < N; i++){

        getline(cin,str[i]);
    }
    
    char X[]="ABCDC",Y[]="BDACD";
    
    int m= strlen(X);
    int n=strlen(Y);
    
    Les_Length(X,Y,m,n);
    
return 0;
}