#include <bits/stdc++.h>

using namespace std;

int main(){

   int n;
   cin >> n;

   int i, count;
   float k, profit=0, temp=0;
   float a[n], c[n], b[n];

   for (i = 0; i < n; i++){

      cin >> a[i] >> c[i];
      b[i] = c[i]/a[i];
   }

   cin >> k;
   for (i = 0; i < n; i++){

      for (int j = i + 1; j < n; j++){

         if (b[i] < b[j]){

            temp = b[j];
            b[j] = b[i];
            b[i] = temp;

            temp = a[j];
            a[j] = a[i];
            a[i] = temp;

            temp = c[j];
            c[j] = c[i];
            c[i] = temp;
         }
      }
   }
   for (i = 0; i < n; i++){

      if (a[i] > k){
         break;
      }
      else{

         profit += c[i];
         k -= a[i];
      }
   }
   if (i < n){
      profit += ((k / a[i]) * c[i]);
   }
   cout << profit << endl;
return 0;
}