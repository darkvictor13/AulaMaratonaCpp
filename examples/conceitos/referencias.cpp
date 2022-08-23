#include <bits/stdc++.h>

using namespace std;

void trocaUsandoPonteiro(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void trocaUsandoReferencias(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main () {
    int x = 10, y = 20;
    cout << x << ", " << y << '\n';
    trocaUsandoPonteiro(&x, &y);
    cout << x << ", " << y << '\n';
    trocaUsandoReferencias(x, y);
    cout << x << ", " << y << '\n';
    return 0;
}
