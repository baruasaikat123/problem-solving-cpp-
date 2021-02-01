//x-OR from 1 to n
//ans = 1^2^3^...^n
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
    int x = n&3;             // x --> n%4
    if(x==1) n=1;            // x = 1 => ans = 1
    else if(x==2) n++;       // x = 2 => ans = n+1
    else if(x==3) n=0;       // x = 3 => ans = 0
    cout << n << '\n';       // x = 0 => ans = n
}
int main(){
    
    fast_in_out();
	test(){

		solve();
	}
	//solve();
	
	return 0;
}