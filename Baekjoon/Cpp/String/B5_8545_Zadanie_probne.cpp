#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 8545 Zadanie probne;
    // 문자열

    string tmp;
    cin >> tmp;
    reverse(tmp.begin(), tmp.end());
    cout << tmp;

    return 0;
}
