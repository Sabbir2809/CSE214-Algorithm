#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int n, int arr[]);

int main(){

    int n;
    cin>> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }

    bubbleSort(n,arr);

return 0;

}

void bubbleSort(int n, int arr[]){

    int i, j, size = n;
    int swap, counter = 0;

    for(i = 0; i < size-1; i++){// n
        swap = 0;
        for(j = 0; j < size-1-i; j++){// n

            counter++;//loop counter
            if(arr[j] > arr[j+1]){

                //swap two numbers
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0){
            break;
        }

    }
    cout<< "After sorting:";

    for(i = 0; i <size; i++){

        cout<< " "<< arr[i];
    }
    cout<< "\nTotal loop: \n"<< counter;//loop Counter
}


/*
-12  2  3  10 (ছোট থেকে বড় সাজানো)
-2  12  3  10
-2  3  12  10
-2  3  10  12

    //-Runtime Complexity: O(n^2)
    //-Space Complexity  : O(1)

*/