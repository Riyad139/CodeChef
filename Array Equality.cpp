#include <bits/stdc++.h>
using namespace std;

int main(){
     
     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
     #endif

    int t;
    cin >> t;
    while(t--){
    	int n,x;
    	cin >> n;
    	unordered_map<int,int>um;
    	while(n--){
         cin >> x;
         um[x]++;
    	}
    	vector<int>v;
    	for(auto x:um){
           v.push_back(x.second);
    	}
    	if(v.size() == 1) cout << "No" << endl;
    	else if(v.size() == 2 and abs(v[0]-v[1]) <=1 ) cout << "Yes" << endl;
       else{
    	sort(v.begin(),v.end());
    	
    	int max = v[v.size()-1];

    	for(int i = v.size()-2 ; i >= 0;i--){
            max-=v[i];
          if(max < 0) break;
    	}
    	if( max <= 1) cout << "Yes" << endl;
    	else cout << "No" << endl;
    	}
    }



return 0;

}
