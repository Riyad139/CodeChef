problem link : https://www.codechef.com/submit/PAIREQ

#include <bits/stdc++.h>
using namespace std;

int main(){
     

   int n,x,t;
   cin >> t;
   while(t--){
   cin >> n;
   int arr[1001]={};
   while(n--) {
       cin >> x;
       arr[x]++;
     }
   
   int min = 0, max = 0;
   for(int i = 0; i < 1001;i++){
    
    if(max < arr[i]){ 
    min+=max;
    max = arr[i];
        
    }else min +=arr[i];
    
   } 
  

   cout << min << endl;
}


return 0;

}
