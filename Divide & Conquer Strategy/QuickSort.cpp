/*
#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int a[],int left,int right){

    if(left < right){

        int pivot = partition(a,left,right);
        quickSort(a,left,pivot-1);
        quickSort(a,pivot+1,right);
    }
}
int partition(int a[],int left,int right){

    int pivoit = a[left];

    while(left != right){

        if(pivoit == a[left]){

            if(a[right] > pivoit){
                right--;
            }
            else if(a[right] >= pivoit){

                swap(&a[right],&a[left]);
                pivoit = a[right];
                left++;
            }
        }
        else if(pivoit == a[right]){

            if(a[left] < pivoit){
                left++;
            }
            else if(a[left] >= pivoit){

                swap(&a[left],&a[right]);
                pivoit = a[left];
                right--;
            }
        }
    }
    return left;
}

int main(){

    int n;
    scanf("%d",&n);

    int i,a[n];
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Before sort: ");
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n");

    quickSort(a,0,n-1);

    printf("After sort: ");
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

return 0;
}
*/



/*
// Quick sort in C

#include <stdio.h>

// Function to swap position of elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to partition the array on the basis of pivot element
int partition(int array[], int low, int high)
{

    // Select the pivot element
    int pivot = array[high];
    int i = (low - 1);

    // Put the elements smaller than pivot on the left
    // and greater than pivot on the right of pivot
    int j;
    for (j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {

        // Select pivot position and put all the elements smaller
        // than pivot on left and greater than pivot on right
        int pi = partition(array, low, high);

        // Sort the elements on the left of pivot
        quickSort(array, low, pi - 1);

        // Sort the elements on the right of pivot
        quickSort(array, pi + 1, high);
    }
}

// Function to print eklements of an array
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

// Driver code
int main()
{

    int n;
    scanf("%d",&n);

    int size = sizeof(data) / sizeof(data[0]);
    quickSort(data, 0, size - 1);
    printf("Sorted array in ascending order: \n");
    printArray(data, size);
}
*/

#include<stdio.h>
void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main(){
   int i, count, number[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}