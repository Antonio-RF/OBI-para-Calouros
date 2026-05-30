#include <bits/stdc++.h>
using namespace std;
 
// Tipos básicos
using ll = long long;

 
int main() {
    int e,s,l;
    cin >> e >> s >> l;

    cout << abs(e-s)+abs(s-l)+abs(l-e) << "\n";
}
 