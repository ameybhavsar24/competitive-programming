// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: *

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
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

// ll modmul(ll a, ll b) {
    // return ((a%MOD) * (b%MOD)) % MOD;
// }

// ll modadd(ll a , ll b){
    // return((a%MOD)+(b%MOD)+MOD)%MOD;
// }

// ll modsub(ll a , ll b){
    // return((a%MOD) - (b%MOD) + MOD)%MOD;
// }
#define MOD 1000000007
int n;
string s;
void solution() {
	cin >> n;
	cin >> s;
	vector< int > grp(n,1);
	int p = s[0] - '0', g = 1, tmp = 1-p, tmpI = 1;
	rep(i,1,n) {
		if (s[i]-'0' != p) {
			grp[i] = g;
		} else {
			
			if (s[i] - '0' == tmp) {
				grp[i] = tmpI;
				continue;
			}
			
			grp[i] = ++g;
		}
		p = (s[i] - '0');
	}
	
	set< int > ss;
	for (auto& e:grp) {
		ss.insert(e);
	}
	cout << (int) ss.size() << '\n';
	for (auto& e:grp) {
		cout << e << ' ';
	}
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}