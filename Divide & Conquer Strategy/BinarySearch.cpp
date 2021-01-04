#include<bits/stdc++.h>

using namespace std;

int binarySearch(int n, int arr[], int searchItem);

int main(){

    int n;
    cin>> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    int searchItem;
    cin>> searchItem;

    int result = binarySearch(n,arr,searchItem);

    if(result != -1){
        cout<< searchItem<<"Item Found";
    }
    else{
        cout<< "Item Not Found";
    }

return 0;
}

int binarySearch(int n, int arr[], int searchItem){

    int left = 0, right = n-1, middle;


    while(left <= right){

        middle = (left+right)/2;
        
        if(arr[middle] == searchItem){
            //printf("%d\n",counter);
            left = middle + 1;
        }
        else if(arr[middle] < searchItem){
            
            right = middle - 1;
        }
        else{
            return middle;
        }
    }
    return -1;
}
