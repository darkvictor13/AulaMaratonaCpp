#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 0xf, y = 0x2;  // x = 15, y = 2

    cout << " 2 << 2 = " << (y << 2) << '\n';  // 0010=02 -> 1000=8
    cout << "15 >> 2 = " << (x >> 2) << '\n';  // 1111=15 -> 0011=3

    return 0;
}
