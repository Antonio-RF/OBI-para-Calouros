#include <bits/stdc++.h>
using namespace std;

bool eh_letra(char c) {
	if (c >= 'A' && c <= 'Z')
		return true;

	return false;
}

bool eh_numero(char c) {
	if (c >= '0' && c <= '9')
		return true;

	return false;
}



int main() {
	string s;
	cin >> s;


	//conferindo se é o novo padrão:
	if (s.size()==7 && eh_letra(s[0]) && eh_letra(s[1]) && eh_letra(s[2]) && eh_numero(s[3]) && eh_letra(s[4]) && eh_numero(s[5]) && eh_numero(s[6]))
		cout << "2\n";
	//conferindo se é o padrão antigo:
	else if (s.size()==8 && eh_letra(s[0]) && eh_letra(s[1]) && eh_letra(s[2]) && s[3]=='-' && eh_numero(s[4]) && eh_numero(s[5]) && eh_numero(s[6]) && eh_numero(s[7]))
		cout << "1\n";
	else
		cout << "0\n";


	return 0;
}
 

