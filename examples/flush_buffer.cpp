#include <bits/stdc++.h>

using namespace std;

int main () {
    // desabilita a sincronização entre as streams do c com do c++
    // tire a linha se for usar printf e scanf
    ios_base::sync_with_stdio(false);
    // desabilita o flush automático do buffer
    // tire a linha caso for dar um cout sem fim de linha e logo em seguida cin
    cin.tie(0);

    int x;
    cout << "Entre com um valor: ";
    cin >> x;
    cout << "Vc digitou " << x << "\n";
    
    return 0;
}
