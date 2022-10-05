#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define coun int count = 0
#define pb push_back
#define um unordered_map<int,int> u;
#define fon(i,st,end) for(int i = st;i<end;i++)
#define int  long long
using namespace std;

int arr[1000001];
int mod = 1e9+7;

void preCalculate(){
    arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i < 1000001;i++)
		arr[i] = ((arr[i-1]%mod) + (arr[i-2]%mod))%mod;
} 

void solve(){
  int n,g;
  cin >> n >> g;
  int totalWay = arr[n];
  int pop = __builtin_popcountll(totalWay);
  if(pop == g) {
  	cout << "CORRECT" << endl;
  }
  else cout << "INCORRECT" << endl;
}


int32_t main(){
    
    IOS

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    preCalculate();
    int T;
    cin >> T;
    while(T--){
    	solve();
    }
 
	return 0;
}
