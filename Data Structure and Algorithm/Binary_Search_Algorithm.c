
#include<stdio.h>

int main(){

    int arr[] = {6,5,4,3,2,1};
    int searchItem = 2;
    int left = 0, right = 5, middle;

    //Runtime Complexity: O(logN)
    //Space Complexity  : O(1)
    //int counter = 0;
    while(left <= right){
        //counter++;
        middle = (left+right)/2;
        
        if(arr[middle] == searchItem){
            //printf("%d\n",counter);
            printf("Item found at index: %d\n",middle);
            return 0;
        }
        else if(arr[middle] < searchItem){
            
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    printf("Item not found.\n");

return 0;
}

/*

-Binary Search কি? (শর্তঃ Sorted Array. ছোট থেকে বড় বা বড় থেকে ছোট সাজানো থাকবে)
উত্তরঃ একটি Array বা List থেকে আইটেম খুজে বের করার পদ্ধতি।

-Binary Search কিভাবে কাজ করে?
উত্তরঃ 

-Runtime Complexity?
উত্তরঃ তাই এই Algorithm এর টাইম কমপ্লেক্সিটি হবে O(log N).

=> N/2^k = 1
=> 2^K = N
=> log 2^k = log(N)
=> k log 2^2 = log 2 আমরা জানি, loga^a = 1
=> k = log2 (N) = log(N)


-Space Complexity?
উত্তরঃ যে array আসছে, সেটাতেই কাজ করেছি। কোন অতিরিক্ত যায়গা নেই নি।
তাই স্পেস কমপ্লেক্সিটি হবে O(1).

*/

