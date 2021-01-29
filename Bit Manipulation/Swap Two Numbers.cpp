//Swap two numbers
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

    int a,b;
    cin >> a >> b;
    a = a^b;
    b = a^b;
    a = a^b;
    cout << a << " " << b; 
}
int main(){
    
    fast_in_out();
	/*test(){

		solve();
	}*/
	solve();

	return 0;
}