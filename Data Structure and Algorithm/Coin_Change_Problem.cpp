#include<bits/stdc++.h>

using namespace std;

#define Max 1000
int ans[Max];

int findMinMoney(int notes,int value[]);

int main(){
    
    int notes;
    cin>> notes;
    
    int value[notes], i;
    for(i = 0; i < notes; i++){
        cin>> value[i];
    }
    sort(value, value+notes);
    int minCount = findMinMoney(notes-1,value);

    cout<< minCount << endl;  
    for(i = 0; i < minCount; i++){
        cout<< ans[i] << " ";
    }

return 0;
}

int findMinMoney(int notes,int value[]){

    int i, count = 0, num, coin; 

    int returnMoney;
    cin>> returnMoney;

    for(i = 0; i < notes; i++){

        while(returnMoney >= 0){
            
            coin = value[notes];
            num = returnMoney/coin;
            count = count+num;
            returnMoney = returnMoney-num*coin;
            notes--;    
        }
    }
    return count;
}