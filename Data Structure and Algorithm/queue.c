#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int ourQueue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFull(){
   if(totalItem == CAPACITY){
      return true;
   }
   return false;
}

bool isEmpty(){
   if(totalItem == 0){
      return true;
   }
   return false;
}


void enqueue(int item){
   if(isFull()){
      printf("Sorry, the Queue is full.\n");
      return;
   }
   rear = (rear + 1) % CAPACITY;
   ourQueue[rear] = item;
   totalItem++;

}

int dequeue(){

   if(isEmpty()){
      printf("Sorry! The Queue is empty.\n");
      return -1;
   }
   int frontItem = ourQueue[front];
   ourQueue[front] = -1;
   front = (front + 1) % CAPACITY;
   totalItem--;
   return frontItem;
}

void printQueue(){
   int i;
   printf("Queue: ");
   for(i = 0; i < CAPACITY; i++){
      printf("%d ",ourQueue[i]);
   }
   printf("\n");
}

int main(){

   printf("\n**********\nLet's implement our Queue.\n\n");

   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   printQueue();
   enqueue(50);
   printQueue();
   enqueue(60);
   printf("Deque: %d\n",dequeue());
   printQueue();
   enqueue(60);
   printQueue();

   return 0;
}

/*        --Queue এর কোড কিভাবে করব--

1. একটা Array বা List নিব, যেটাকে আমরা Queue হিসেবে চিন্তা করব
   Queue Rule : First in First Out (FIFO)

Funtion:
Enqueue(item): Add an item to the Queue  (add)

Dequeue(): Remove one item from the Queue  (delete)

*/