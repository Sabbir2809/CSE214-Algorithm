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

/*
#include<bits/stdc++.h>
using namespace std;
int greedy_coin_change(int arr[],int N,int s)
{

    int coins=0,c,num;
    int i=N-1;
    while (s>0)
    {
        if(arr[i]<=s)
        {
           c=arr[i];
        }

        num=s/c;
        coins=coins+num;
        cout<<c<<"  "<<num<<endl;
        s=s-(num*c);
        i--;
    }
    return coins;
}
int main()
{

    int s,N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    cin>>s;
    int result=greedy_coin_change(arr,N,s);
    cout<<result;

}

15
1 7 10
*/