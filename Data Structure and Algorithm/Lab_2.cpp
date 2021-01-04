#include<bits/stdc++.h>
using namespace std;

void maximumProfit(int n,float a[],float b[],float c[],float k){
    
    int i,j;
    float temp=0;
    for(i = 0; i < n; i++){
        
        for(j = i+1; j < n; j++){
            
            if(b[i] < b[j]){
                
                temp = b[j];
                b[j] = b[i];
                b[i] = temp;
                
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                
                temp = c[j];
                c[j] = c[i];
                c[i] = temp;
            }
        }
    }
    
    float pFit=0;
    for(i = 0; i < n; i++){
        
        if(a[i] > k){
            break;
        }
        else{
            pFit = pFit + c[i];
            k = k - a[i];
        }
    }
    if(i < n){
        pFit = pFit + ((k / a[i]) * c[i]);
    }
    cout<< pFit<<endl;
}

int main(){
    
    int n;
    cin>> n;
    
    float a[n], b[n], c[n];
    int i, j;
    for(i = 0; i < n; i++){      
        cin>> a[i] >> c[i];
        
        b[i] = c[i]/a[i];
    }
    float k;
    cin>> k;
    
    maximumProfit(n,a,b,c,k);

return 0;
}
