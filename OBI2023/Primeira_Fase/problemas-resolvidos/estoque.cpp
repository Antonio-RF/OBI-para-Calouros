#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> m >> n;

	vector<vector<int>> v(m, vector<int> (n));
	for (int i=0 ; i<m ; i++) {
		for (int j=0 ; j<n ; j++) {
			cin >> v[i][j];
		}
	}

	int ans=0;
	int p;
	cin >> p;
	for (int i=0 ; i<p ; i++) {
		int tipo, tamanho;
		cin >> tipo >> tamanho;
		
		//como minha matriz é 0-based (primeiro elemento está no posição 0 e não na posição 1)
		//eu então diminuo o valor de tipo e tamanho para ficarem 0-based:
		tipo--;
		tamanho--;

		if (v[tipo][tamanho] > 0 ){
			ans++;
			v[tipo][tamanho]--;
		}
	}

	cout << ans << "\n";


	return 0;
}
 

