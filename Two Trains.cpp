#include <bits/stdc++.h>
using namespace std;

int main(){
     
     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
     #endif
  int n;
  cin >> n;


  while(n--){
  
   int t,timeGap,totalTime=0,tm;cin >> t;
   
  for(int i = 1; i < t;i++){
      cin >> tm;
      if(i == 1) totalTime = 2*tm,timeGap = tm;
      else if(timeGap >= tm) totalTime+=tm;
      else if(timeGap < tm) totalTime+=tm+tm-timeGap,timeGap = tm;
      
  }
cout << totalTime << endl;
}

return 0;

}
