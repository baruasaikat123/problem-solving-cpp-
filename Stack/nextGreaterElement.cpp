//Next Larger Element
//https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define loop(i,n) for(ll i=0;i<n;i++)
#define vi vector<int>
#define vil vector<ll>   
#define pii pair<int,int>
#define st stack<int>
#define stl stack<ll>
vil nextGreaterElement(ll arr[],int n){

	vil v;
	stl s;
	s.push(arr[n-1]);
	v.pb(-1);
	for(ll i=n-2;i>=0;i--){

	    while(s.size()>0 && s.top()<=arr[i]){

	        s.pop();
	    }
	    ll ans = s.size()==0?-1:s.top();
	    v.pb(ans);
	    s.push(arr[i]);
	}
	reverse(v.begin(),v.end());
	return v;
}
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){

		ll n;
		cin >> n;
		ll arr[n];
		loop(i,n){

			cin >> arr[i];
		}
		vil v=nextGreaterElement(arr,n);
		loop(i,n){

			cout << v[i] << " ";
		}
		cout << '\n';    
	}

	return 0;
}
