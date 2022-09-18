#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define coun int count = 0
#define pb push_back
#define fon(i,st,end) for(int i = st;i<end;i++)
using namespace std;

void solve(){
 
  int n,x,y;
  cin >> n;
   
   int arr[6] = {}; 

    vector<vector<int>>v;

   for(int i = 0; i < n;i++){
   	cin >> x;
     vector<int>temp;
   	for(int j = 0; j < x;j++){
   		cin >> y;
   		temp.pb(y);   	
   	}
   v.pb(temp);
   }


   for(int i = 0; i < n;i++){
   	vector<int>curr = v[i];
   	int arr[6] = {};
   	for(int k = 0; k < curr.size();k++){
   		arr[curr[k]]++;
   	}

    for(int j = i+1;j < n;j++){
    	vector<int>curr2 = v[j];
    	int count1 = 0;
    	for(int k = 0; k < curr2.size();k++){
    		if(arr[curr2[k]] == 0) count1++;
    	}
    	if(5-curr.size() <= count1) {
    		cout << "YES" << endl;
    		return;
    	}
    }
}
   
   cout << "NO" << endl;

}


int main(){
    
    IOS
    
    int T;
    cin >> T;
    while(T--){
    	solve();
    }
 
	return 0;
}
