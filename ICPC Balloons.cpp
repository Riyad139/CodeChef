#include <bits/stdc++.h>
using namespace std;

int main(){
     
     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
     #endif

    int T;
    cin >> T;
    while(T--){
        int n,x;
        int arr[8] = {},count = 0;
        cin >> n;
        int i = 0;
        int total = 0;
        for(i = 1; i <= n; i++){
        	cin >> x;
           if(x < 8 && arr[x] == 0) arr[x]++,count++;
           if(count == 7 and total ==0 ) total = i;
        }
         cout << total << endl;
        

    }


return 0;

}
