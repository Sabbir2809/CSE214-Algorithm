#include<stdio.h>

int main(){

    int arr[] = {-3, 4, 1, 88, 5, 7};
    int searchItem = 100;
    int i;

    //Runtime Complexity: O(n)
    //Space Complexity  : O(1)
    for(i = 0; i < 6; i++){

        if(arr[i] == searchItem){

            printf("Item found at index: %d\n",i);
            return 0;
        }
    }
    printf("Item not found.\n");

    return 0;
}

/*
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