//Find the only non-repeating element in an array where
//every elements repeats twice
//T.C - O(N) , S.C - O(1) 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define loop(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vil vector<ll>
#define test() int t;cin>>t;while(t--)
void fast_in_out(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve(){

    int n;
    cin >> n;
    int a[n];
    loop(i,n) cin >> a[i];
    int ans=0;
    loop(i,n) ans = ans^a[i];
    cout << ans;
}
int main(){
    
    fast_in_out();
	/*test(){

		solve();
	}*/
	solve();
	
	return 0;
}