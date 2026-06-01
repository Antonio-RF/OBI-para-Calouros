#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,c,d;
	cin >> a >> b >> c >> d;

	bool deu=false;
	while(c>0) {
		if (c>=a && c<=b) {
			deu = true;
			break;
		}
		c -= d;
	}

	if (deu) cout << "S" << endl;
	else cout << "N" << endl;

	return 0;
}