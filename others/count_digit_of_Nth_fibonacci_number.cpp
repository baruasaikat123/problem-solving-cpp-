//Find number of digits in Nth Fibonacci Numbers:
//https://practice.geeksforgeeks.org/problems/number-of-digits2559/1#
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
    if(n==1) cout << 1;
    else{
    	double x = (1+sqrt(5))/2;
        double ans = n*log10(x)-(log10(5)/2);
        cout << ceil(ans);
    }
}
int main(){
    
    fast_in_out();
	/*test(){

		solve();
	}*/
	solve();

	return 0;
}