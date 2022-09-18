#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
using namespace std;

int32_t main(){
     


    int t;
	cin >> t;
	while(t--){
	    int x , y;
	    int count = 0;
	     scanf("%d %d", &x,&y);
         if(x == y and x%2 != 0)  printf("Odd\n");
        else{
         if(x&1 == 1) count++;
         if(y&1 == 1) count++;
         
        count+= (y-x-count) / 2;
        if(count%2) printf("Odd\n");
        else printf("Even\n");
       }




	}


return 0;

}		
