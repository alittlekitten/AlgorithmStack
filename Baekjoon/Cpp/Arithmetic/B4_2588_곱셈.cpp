#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2588 곱셈
    // 수학

    int input1, input2;
    int a, b, c, d;
    cin >> input1 >> input2;
    a = input1 * (input2 % 10);
    b = input1 * (input2 / 10 % 10);
    c = input1 * (input2 / 100 % 10);

    cout << a << '\n' << b << '\n' << c << '\n' << a + 10 * b + 100 * c;
    return 0;
}
