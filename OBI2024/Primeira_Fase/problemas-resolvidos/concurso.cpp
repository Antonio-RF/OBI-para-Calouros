#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (int i=0 ; i<n ; i++) {
		cin >> v[i];
	}

	//ordenando o vetor na ordem decrescente:
	sort(v.rbegin(), v.rend());

	cout << v[k-1] << "\n";


	return 0;
}
 

