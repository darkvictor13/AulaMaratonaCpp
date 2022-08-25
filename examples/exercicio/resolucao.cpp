#include <bits/stdc++.h>

using namespace std;

int main () {
    uint32_t size, x;

    // Características da estrutura de dados set:
    //  - nao permite elementos repetidos
    //  - ordena os elementos automaticamente
    //  - nao permite acesso direto aos elementos
    set<uint32_t> distincts;

    cin.tie(0);
    ios::sync_with_stdio(false);

    for (cin >> size; size > 0; size--) {
        cin >> x;
        distincts.insert(x);
    }

    cout << distincts.size() << endl;

    return 0;
}
