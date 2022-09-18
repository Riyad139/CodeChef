#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define coun int count = 0
#define pb push_back
#define um unordered_map<int,int> u;
#define fon(i,st,end) for(int i = st;i<end;i++)
using namespace std;

void solve(){
 int r,g,b;
 cin >> r >> g >> b;
 int count = !r + !g + !b;
 if(count == 3){
    cout << 0 << endl;
    return;
 }
 if(count == 2) {cout  << 1 <<endl; return;}
 if(count == 1){
     int  maxI = 2;
    if(r -1 > 0 && b-1 > 0) maxI++,r--,b--;
    if(r-1 > 0 && g-1 > 0) maxI++,r--,g--;
    if(g-1 > 0 && b-1 > 0) maxI++;
    cout << maxI << endl;
    return;
 }
 if(count == 0){
    int maxI = 3;
    int arr[3] = {r,b,g};
    sort(arr,arr+3); 


    if(arr[2]-1 > 0 && arr[1]-1 > 0) arr[2]--,arr[1]--,maxI++;
    if(arr[2]-1 > 0 && arr[0]-1 > 0) arr[2]--,arr[0]--,maxI++;
    if(arr[0]-1 > 0 && arr[1]-1 > 0) maxI++;
    cout << maxI << endl;
 }



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
