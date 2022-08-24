#include <bits/stdc++.h>

using namespace std;

class Ponto {
    private:
        uint32_t x, y;
    public:
        Ponto(uint32_t x, uint32_t y) : x(x), y(y) {
        }

/*
        bool operator<(const Ponto &other) {
            if (this->x != other.x) {
                return this->x < other.x;
            }
            return this->y < other.y;
        }
*/
};

int main () {
    vector<Ponto> pontos;
    pontos.reserve(10);
    for(int i = 0; i < 10; i++) {
        pontos.push_back(Ponto(i, i+10));
    }

    sort(pontos.begin(), pontos.end());

    return 0;
}