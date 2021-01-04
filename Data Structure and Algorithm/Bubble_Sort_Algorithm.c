#include<stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int i, j, size = 5;
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
    printf("After sorting:\n");

    for(i = 0; i <size; i++){

        printf("%d ",arr[i]);
    }
    printf("\nTotal loop: %d\n",counter);//loop Counter

return 0;

}
/*
-12  2  3  10 (ছোট থেকে বড় সাজানো)
-2  12  3  10
-2  3  12  10
-2  3  10  12

    //-Runtime Complexity: O(n^2)
    //-Space Complexity  : O(1)

*/