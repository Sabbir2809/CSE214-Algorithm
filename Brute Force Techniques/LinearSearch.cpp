#include<bits/stdc++.h>

using namespace std;

int linearSearch(int n, int arr[], int searchItem);

int main(){

    int n;
    cin>> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }

    int searchItem;
    cin>> searchItem;

    int result = linearSearch(n, arr, searchItem);

    if(result != -1){

        cout<< result;
    }

return 0;
}

int linearSearch(int n, int arr[], int searchItem){

    for(int i = 0; i < n; i++){

        if(arr[i] == searchItem){

            return i;
        }
    }
    return -1;

}



/*
    Runtime Complexity: O(n)
    Space Complexity  : O(1)

-Algorithm কিভাবে লিখব?
    Step-1: Start
    Step-2: i = 0, searchItem = 4
    Step-3: if i >= n Go to Step-8
    Step-4: if a[i] == searchItem go to Step-7
    Step-5: i++
    Step-6: Go to Step-3
    Step-7: print 'item found at index i' and go to Step-9
    Step-8: print 'item not found' and go to Step-9
    Step-9: Stop

-Linear Search কি?
উত্তরঃ একটি Array বা List থেকে আইটেম খুজে বের করার পদ্ধতি।

-Linear Search কিভাবে কাজ করে?


-Runtime Complexity?
উত্তরঃ যদি array তে N টা আইটেম থাকে,তাহলে N টা ঘরে গিয়ে গিয়ে আমাদের সার্চ করতে হবে।
সহজ কথায় একটা লুপ N বার ঘুরবে আর আইটেম টা সার্চ করবে।তাই এই Algorithm এর টাইম 
কমপ্লেক্সিটি হবে O(N).

-Space Complexity?
উত্তরঃ যে array আসছে, সেটাতেই কাজ করেছি।কোন অতিরিক্ত যায়গা নেই নি।
তাই স্পেস কমপ্লেক্সিটি হবে O(1).

*/