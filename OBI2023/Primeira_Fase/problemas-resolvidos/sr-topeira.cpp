#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int s, t;
	cin >> s >> t;

	vector<vector<bool>> v(s, vector<bool> (s, false));
	for (int i=0 ; i<t ; i++) {
		int x, y;
		cin >> x >> y;

		//deixando em 0-based (meus índices começam em 0, ou seja, o elemento 1 é 0, o elemento 2 é 1, e assim por diante)
		x--;
		y--;

		v[x][y] = 1;
		v[y][x] = 1;
	}

	int p;
	cin >> p;
	int ans=0;
	for (int i=0 ; i<p ; i++) {
		int n;
		cin >> n;
		vector<int> caminho(n);
		for (int j=0 ; j<n ; j++) {
			cin >> caminho[j];
			//deixando em 0-based:
			caminho[j]--;
		}

		bool deu_certo=true;
		for (int j=0 ; j<n-1 ; j++) {
			if (v[caminho[j]][caminho[j+1]]!=1) {
				deu_certo = false;
				break;
			}
		}

		if (deu_certo) ans++;
	}

	cout << ans << "\n";

	return 0;
}
 

