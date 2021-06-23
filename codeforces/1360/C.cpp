// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: CF-Div.3 #644

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;

#define bpc __builtin_popcount
#define bpcl __builtin_popcountll
#define bpr __builtin_parity
#define bprl __builtin_parityll
#define ctz __builtin_ctz
#define ctzl __builtin_ctzll
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
#define MOD 1000000007

//make sure to change MAXN according to constraints
#define MAXN 100001

ll t,n,a[MAXN],b[MAXN];
ll fe (ll x, ll y) {
	ll ans = 1;
	while (y>0) {
		if (y&1) {
			ans = (x*ans) % MOD;
		}
		y /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}


void solution() {
	cin >> n;
	vector<int> e,o;
	
	rep(i,0,n) {
		cin >> a[i];
		if (a[i]&1)
			o.push_back(a[i]);
		else
			e.push_back(a[i]);
	}
	
	sort(e.begin(),e.end());
	sort(o.begin(),o.end());
	sort(a,a+n);
	
	
	if ((int)e.size() % 2 == 0 && (int) o.size() % 2 == 0 ) {
		cout << "YES\n";
		return;
	}
	
	int en = e.size(), on =o.size();
	rep(i,0,(int)e.size()) {
		if (!(en % 2 == 0  && on % 2 == 0)) {
		rep(j,0,(int)o.size()) {
			if (abs(e[i]-o[j]) == 1) {
				//~e.erase(e.begin()+i);
				//~o.erase(o.begin()+j);
				en--;
				on--;
				break;
			}
		}
		}
		else {
			break;
		}
	}
	
	if (en % 2 == 0 && on % 2 == 0 ) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
	
	
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}