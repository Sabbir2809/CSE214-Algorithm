//first fit decreasing bin packing problem in c++
#include<bits/stdc++.h>

using namespace std;

void binPacking(int *arr, int bSize, int n){

    sort(arr,arr+n,greater<int>());
    
    int binCount = 0;
    int binValues[n];

    for(int i = 0; i < n; i++){
        binValues[i] = bSize;
    }
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            if(binValues[j]-arr[i] >= 0){
                binValues[j] = binValues[j] - arr[i];
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){

        if(binValues[i] != bSize){
            binCount++;
        }
    }  
    cout<< binCount;
}

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }

    int bSize;
    cin >> bSize;

    binPacking(arr,bSize, n);

return 0;
}
