#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	vector<int> s1(a);
	for (int i=0 ; i<a ; i++)
		cin >> s1[i];

	vector<int> s2(b);
	for (int i=0 ; i<b ; i++)
		cin >> s2[i];


	bool deu=false;
	int i=0;
	int j=0;
	int ans=0;
	while(i<s1.size()) {
		if (s1[i]==s2[j]) {
			ans++;
			j++;
		}

		if (ans==s2.size()) {
			deu = true;
			break;
		}

		i++;
	}


	if (deu) cout << "S\n";
	else cout << "N\n";

	return 0;
}
 

