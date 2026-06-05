#include <bits/stdc++.h>
using namespace std;

int main() {
	int v;
	cin >> v;

	vector<int> contas(3);
	for (int i=0 ; i<3 ; i++) {
		cin >> contas[i];
	}

	//ordenando o vetor das contas:
	sort(contas.begin(), contas.end());

	int ans=0;
	for (int i=0 ; i<3 ; i++) {
		if (v-contas[i] >= 0) {
			v -= contas[i];
			ans++;
		}
	}

	cout << ans << "\n";



	return 0;
}
 

