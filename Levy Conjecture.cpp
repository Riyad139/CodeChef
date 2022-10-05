#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define coun int count = 0
#define pb push_back
#define um unordered_map<int,int> u;
#define fon(i,st,end) for(int i = st;i<end;i++)
using namespace std;

vector<int>prime;

void prePrime(){
	 int arr[10000]={};
 arr[1] = 1;
 for(int i = 2; i < 10000;i++){
 	if(arr[i] == 1) continue;
 	prime.pb(i);
 	for(int j = i*2;j<10000;j+=i)
 		arr[j]=1;
 }
}

void solve(){
	int n;
	cin >> n;
	int count = 0;
 for(int i = 0; i < prime.size() && prime[i] < n;i++){
 	for(int j = 0; j < prime.size()&& prime[j] < n;j++)
 		if(prime[i]+2*prime[j] == n && i!=j) count++;
 }
 cout << count << endl;

 
}


int main(){
    
    IOS

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    prePrime();
    int T;
    cin >> T;
    while(T--){
    	solve();
    }
 
	return 0;
}
