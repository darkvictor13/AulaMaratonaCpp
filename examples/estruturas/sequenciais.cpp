#include <bits/stdc++.h>

using namespace std;

int main() {
    // desabilita a sincronização entre as streams do c com do c++
    // tire a linha se for usar printf e scanf
    ios_base::sync_with_stdio(false);
    // desabilita o flush automático do buffer
    // tire a linha caso for dar um cout sem fim de linha e logo em seguida cin
    cin.tie(0);

    int vetor_c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    array<int, 10> vetor_estatico = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vetor_dinamico;

    cout << "Dados do vetor estatico:\n";
    cout << "Tamanho: " << vetor_estatico.size() << "\n";
    cout << "Primeiro elemento: " << vetor_estatico.front() << "\n";
    cout << "Ultimo elemento: " << vetor_estatico.back() << "\n";
    cout << "Dados:";
    for (const auto &i : vetor_estatico) {
        // for (const int i : vetor_estatico) {
        cout << ' ' << i;
    }
    cout << '\n';

    vetor_dinamico.reserve(10);
    cout << "\nDados do vetor dinamico:\n";
    cout << "Capacidade: " << vetor_dinamico.capacity() << "\n";
    cout << "Tamanho: " << vetor_dinamico.size() << "\n";
    for (const int i : vetor_estatico) {
        cout << "\nInserindo " << i << " no vetor dinamico\n";
        vetor_dinamico.push_back(i);
        cout << "Capacidade: " << vetor_dinamico.capacity() << "\n";
        cout << "Tamanho: " << vetor_dinamico.size() << "\n";
    }

    return 0;
}