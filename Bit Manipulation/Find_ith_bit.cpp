//Find ith bit
//n=20(10100)
//Here 0th,1st,3rd bit is 0 and 2nd,4th bit is 1.
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
    int mask = 1<<i;
    if(!(n&mask)) cout << 0;
    else cout << 1;
}
int main(){
    
    fast_in_out();
	/*test(){

		solve();
	}*/
	solve();

	return 0;
}