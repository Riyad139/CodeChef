#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define coun int count = 0
#define pb push_back
#define um unordered_map<int,int> u;
#define fon(i,st,end) for(int i = st;i<end;i++)
using namespace std;

void solve(){
 int n,k;
 cin >> n >> k;
 string str,country;
 map<string,string>mp;
 unordered_map<string,int>u;
 unordered_map<string,int>c;

 fon(i,0,n){
 	cin >> str >> country;
 	mp[str]=country;
 	u[str]++;
 	c[country]++;
 }
 fon(i,0,k){
 	cin >> str;
 	u[str]++;
 	c[mp[str]]++;
 }
 string winnerName,winnerCountry;
 int maxVote = 0;
 for(auto x:u){
   if(maxVote < x.second){
   	winnerName = x.first;
   	maxVote = x.second;
   }
   else if(maxVote == x.second && x.first < winnerName){
   	winnerName = x.first;
   	
   }
 }
 int maxCountryVote = 0;
 for(auto x:c){
    if(maxCountryVote < x.second)
    	winnerCountry = x.first,maxCountryVote=x.second;
    else if(maxCountryVote==x.second && winnerCountry > x.first)
    	winnerCountry = x.first;
 }
 
 cout << winnerCountry << endl;
 cout << winnerName << endl;


}


int main(){
    
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    
    
    	solve();
    
 
	return 0;
}
