
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
   int t; cin >> t;
   int count =0;
   while(t--){
         int a, b, c;
         cin>>a>>b>>c;
         if(a+b+c >=2){
         	count++;
         }
   }
   cout<<count<<endl;
   return 0;
}









