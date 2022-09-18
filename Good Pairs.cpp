#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define coun int count = 0
#define pb push_back
#define um unordered_map<int,int> u;
#define fon(i,st,end) for(int i = st;i<end;i++)
#define int long long int
using namespace std;


int nCr(int n){
    int res = 1;
	for(int i = n; i > n-2;i--){
        res*=i;
    }
	return res/2;
}



void solve(){
  
  int n,x;
  cin >> n;
  um;
  for(int i = 0; i < n;i++){
     cin >> x;    
  	 u[x]++;
  }

  coun;
  for(auto i: u){
  	if(i.second > 2)count+=nCr(i.second);
  	else if(i.second == 2) count++;
  }

  cout << count << endl;

}


int32_t main(){
    
    IOS

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int T;
    cin >> T;
    while(T--){
    	solve();
    }
 
	return 0;
}
