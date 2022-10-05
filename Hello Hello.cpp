#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define coun int count = 0
#define pb push_back
#define um unordered_map<int,int> u;
#define fon(i,st,end) for(int i = st;i<end;i++)
using namespace std;

void solve(){
 double D,U;
 int N;
 double M, R, C;
 cin >> D >> U >> N;
 int count = 0;
 double prevCoast=D*U,coast;
 fon(i,0,N){
 	cin >> M >> R >> C;
 	
 	
 	coast = (C/M + R*U);
 	if(prevCoast > coast) prevCoast = coast,  count = i+1;
 	
 }
 cout <<count << endl;

}


int main(){
    
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
