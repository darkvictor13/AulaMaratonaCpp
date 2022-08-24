#include <iostream>

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
    std::cout << x << ", " << y << '\n';
    trocaUsandoPonteiro(&x, &y);
    std::cout << x << ", " << y << '\n';
    trocaUsandoReferencias(x, y);
    std::cout << x << ", " << y << '\n';
    return 0;
}