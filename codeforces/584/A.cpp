// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
	FASTIO
	
	ll n,t;
	cin >> n >> t;
	
	if(t==10) {
		if (n==1) cout << -1;
		else {
			rep(i,0,n-1) cout << '1';
			cout << '0';
		}
	}
	else {
		rep(i,0,n) cout << t;
	}
	
	return 0;
}