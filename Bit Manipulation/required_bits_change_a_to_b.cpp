//Number of bits need to change to convert a number 'a' to 'b'
//a = 13 = 1101, b = 2 = 0010, ans = 4
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
    int x = a^b;
    int count=0;
    while(x){

    	count++;
    	x = (x&(x-1));
    } 
    cout << count;
}
int main(){
    
    fast_in_out();
	/*test(){

		solve();
	}*/
	solve();
	
	return 0;
}