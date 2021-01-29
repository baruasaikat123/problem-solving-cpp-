//clear ith bit(convert ith bit from 1 to 0)
//n=20(10100)
//changing 2nd bit from 1 to 0 => 10000 = 16
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

    int n,i;
    cin >> n >> i;
    int mask = ~(1<<i);
    cout << (n&mask);
}
int main(){
    
    fast_in_out();
	/*test(){

		solve();
	}*/
	solve();

	return 0;
}