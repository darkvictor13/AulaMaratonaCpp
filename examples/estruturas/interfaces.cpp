#include <bits/stdc++.h>

using namespace std;

int main () {
	// desabilita a sincronização entre as streams do c com do c++
	// tire a linha se for usar printf e scanf
	ios_base::sync_with_stdio(false);
	// desabilita o flush automático do buffer
	// tire a linha caso for dar um cout sem fim de linha e logo em seguida cin
    cin.tie(0);

    stack<int, list<int>> pilha;
    queue<int> fila;

    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.push(4);
    fila.push(5);
    // dados resulatantes da fila: 1 2 3 4 5

    while (!fila.empty()) {
        const int elemento_atual = fila.front();
        cout << "Desenfileirando " << elemento_atual << "\n";
        fila.pop();
        pilha.push(elemento_atual);
    }
    pilha.push(6);
    pilha.push(7);
    // dados resulatantes da pilha: 7 6 5 4 3 2 1

    cout << "Dados da pilha: ";
    while (!pilha.empty()) {
        cout << pilha.top() << ' ';
        pilha.pop();
    }
    cout << '\n';

    return 0;
}