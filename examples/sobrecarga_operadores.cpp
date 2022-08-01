#include <bits/stdc++.h>

using namespace std;

class Ponto {
private:
    int x, y;

    friend ostream& operator << (ostream &out, const Ponto &me) {
        out << '[' << me.x << ", " << me.y << ']';
        return out;
    }

    friend istream& operator >> (istream &input, Ponto &me) {
        input >> me.x >> me.y;
        return input;
    }

public:
    bool operator == (const Ponto &other) {
        if (this->x != other.x) {
            return false;
        }
        return x == other.x;
    }
    bool operator != (const Ponto &other) {
        return !(*(this) == other);
    }
};

int main () {
    Ponto p1, p2;
    cout << "Entre com P1 e P2: ";
    cin >> p1 >> p2;
    cout << "São " << ((p1 == p2)? "iguais" : "diferentes") << '\n';
    cout << "P1: " << p1 << "\nP2: " << p2 << '\n';
    return 0;
}
