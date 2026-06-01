#include <bits/stdc++.h>
using namespace std;

using ll = long long;

 
int main() {
    ll n;
	cin >> n;

	vector<ll> v(n);
	for (ll &i : v) cin >> i;

	reverse(v.begin(), v.end());
	ll ans=0;
	ll maior= v[0];
	for (int i=1 ; i<n ; i++) {
		if (v[i] <= maior) ans++;

		maior = max(maior, v[i]);
	}
	cout << ans << "\n";
}
 
