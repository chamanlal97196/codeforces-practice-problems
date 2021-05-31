
/*
*   author: kartik8800
*/

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define read(x) int x; cin >> x
using namespace std;


int main() {
   int t = 1;
   int arr[4];
   for(int i=0;i<4; i++){
   	cin>>arr[i];
   }
   int count =0,r=0;
   sort(arr, arr+4);
   for(int i=1; i<4; i++){
   	if(arr[i-1]!=arr[i]){
   		count++;
   	}
   }
   cout<<4-count-1<<endl;
   
   return 0;
}
