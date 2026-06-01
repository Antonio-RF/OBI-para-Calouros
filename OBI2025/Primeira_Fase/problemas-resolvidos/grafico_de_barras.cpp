#include <bits/stdc++.h>
using namespace std;
 
// Tipos básicos
using ll = long long;

 
int main() {
    ll n;
	cin >> n;

	vector<ll> v(n);
	ll maior = LLONG_MIN;
	for (int i=0 ; i<n ; i++) {
		cin >> v[i];
		maior = max(maior, v[i]);
	}


	for (int i=maior-1 ; i>=0 ; i--) {
		for (int j=0 ; j<n ; j++) {
			if (v[j]>=i+1) cout << 1 << " ";
			else cout << 0 << " ";
		}
		cout << endl;
	}
}
 