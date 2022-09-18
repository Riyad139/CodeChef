#include <bits/stdc++.h>
#define int long long int
#define end '\n'
using namespace std;


int A[1000000],B[1000000];


int32_t main(){
     
     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
     #endif

    int t;
    cin >> t;
    while(t--){
      int n,sum1=0,sum2=0;
      scanf("%lld",&n);
      for(int i = 0; i < n;i++){
          scanf("%lld",&A[i]);
      }
      int count = 0;
      for(int i = 0; i < n;i++){
        scanf("%lld",&B[i]);
        
        (A[i] > B[i]) ? sum1+=A[i]-B[i] : sum2+=B[i]-A[i];
        
      }

      if(sum1 == sum2) printf("%lld\n",sum1);
      else printf("-1\n");
      
     

    }



return 0;

}
