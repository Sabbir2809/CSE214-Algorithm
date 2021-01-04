#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

void push(int x){

    if(top < CAPACITY-1){

        top = top + 1;
        stack[top]= x;
        printf("succesfully added item: %d\n",x);
        
    }else{
        printf("Exception! No spaces.\n");
    }

}

int pop(){

    if(top >= 0){

        int val = stack[top];
        top = top - 1;

        return val;
    }
    printf("Exception from pop! Empty Stack.\n");
    return -1;
}

int peek(){
    if(top >= 0){
        return stack[top];
    }
    printf("Exception from Peek! Empty Stack\n");
    return -1;
}

int main(){

    printf("Implementing my stack in C.\n");

    printf("Pop item: %d\n",pop());
    push(10);
    push(20);
    push(30);
    printf("Pop item: %d\n",pop());
    push(40);
    printf("Top of Stack: %d\n",peek());
    push(50);
    printf("Pop item: %d\n",pop());
    printf("Pop item: %d\n",pop());

    return 0;
}



/*        --Stack এর কোড কিভাবে করব--

1. একটা Array বা List নিব, যেটাকে আমরা Stack হিসেবে চিন্তা করব
   Stack Rule : Last in First Out (LIFO)

Funtion:
push(item): Put items on top of the Stack (add)

pop(): Remove one item from top of the Stack (delete)

peek(): Returns the value of top item in the stack
*/