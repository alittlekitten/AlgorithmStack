#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 24860 Counting Antibodies
    // 수학

    long long vk, jk, vl, jl, v, d, j;
    cin >> vk >> jk >> vl >> jl >> v >> d >> j;
    cout << (v * j * d) * (vk * jk + vl * jl);

    return 0;
}
