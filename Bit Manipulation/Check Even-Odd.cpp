//Check Even Odd Number
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define loop(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vil vector<ll>

void solve(){

    int n;
    cin >> n;
    if((n&1)==0) cout << "Even";   // if a&1=0, then 'a' is even
    else cout << "Odd";            // if a&1=1, then 'a' is odd
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	/*int t;
	cin >> t;
	while(t--){

		solve();
	}*/
	solve();

	return 0;
}