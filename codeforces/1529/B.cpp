// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
// ll fe (ll x, ll y) {
	// ll ans = 1;
	// while (y>0) {
		// if (y&1) {
			// ans = (x*ans) % MOD;
		// }
		// y /= 2;
		// x = (x*x) % MOD;
	// }
	// return (ans % MOD);
// }
void solve() {
	int n;
	cin >> n;
	vector< int > a(n);
	vector< int > b;
	for (auto& e:a) {
		cin >> e;
		if (e<=0) {
			b.pb(-1*e);
		}
	}
	sort(all(b));
	int maxNeg = 2e9;
	
	for (int i=1; i<(int)b.size(); i++) {
		maxNeg = min(maxNeg, abs(b[i]-b[i-1]));
	}
	
	int dif = abs(maxNeg);
	
	int ans = 0;
	
	int minPos = 2e9;
	for (auto& e:a) {
		if (e > 0 && e <= dif) {
			minPos = e;
		}
	}
	
	
	
	
	// map< int, int > mp;
	// for (auto& e:a) {
		// if (e > 0 && e <= dif) {
			// mp[e]++;
		// }
	// }
	
	// int mxAdd = 0;
	
	// for (auto& e:mp) {
		// mxAdd = max(mxAdd, e.ss);
	// }
	ans += minPos != 2e9;
	ans += (int)b.size();
	cout << ans << '\n';
	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}