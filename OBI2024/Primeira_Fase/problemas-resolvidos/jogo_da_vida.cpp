#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> m;

int fase(int i, int j) {
	int vivos=0;
	if (i>0)
		if (m[i-1][j]==1) vivos++;
	if (j>0)
		if (m[i][j-1]==1) vivos++;
	if (j<(n-1))
		if (m[i][j+1]==1) vivos++;
	if (i<(n-1))
		if (m[i+1][j]==1) vivos++;
	if (i>0 && j>0)
		if (m[i-1][j-1]==1) vivos++;
	if (i>0 && j<(n-1))
		if (m[i-1][j+1]==1) vivos++;
	if (i<(n-1) && j>0)
		if (m[i+1][j-1]==1) vivos++;
	if (i<(n-1) && j<(n-1))
		if (m[i+1][j+1]==1) vivos++;
	return vivos;
}

int main() {

	//variável global:
	cin >> n;

	m.resize(n, vector<int> (n));

	int q;
	cin >> q;
	for (int i=0 ; i<n ; i++) {
		string s;
		cin >> s;
		for (int j=0 ; j<n ; j++) {
			m[i][j] = s[j]-'0';
		}
	}

	vector<vector<int>> ans(n, vector<int> (n));
	for (int i=0 ; i<q ; i++) {
		for (int i=0 ; i<n ; i++) {
			for (int j=0 ; j<n ; j++) {
				int vivos = fase(i, j);
				if (m[i][j]==0 && vivos==3)
					ans[i][j]=1;
				else if (m[i][j]==0 && vivos!=3)
					ans[i][j]=0;
				else if (m[i][j]==1 && (vivos==2 || vivos==3))
					ans[i][j]=1;
				else
					ans[i][j]=0;
			}
		}
		m = ans;
	}

	for (int i=0 ; i<n ; i++) {
		for (int j=0 ; j<n ; j++) {
			cout << ans[i][j];
		}
		cout << "\n";
	}

	return 0;
}
 

