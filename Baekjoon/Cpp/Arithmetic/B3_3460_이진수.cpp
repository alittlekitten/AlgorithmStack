#include <iostream>
#include <string>
using namespace std;

string toBinary(int n) {
    string r;
    while (n != 0) {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 3460 이진수
    // 수학

    int t, n;
    string bin;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        bin = toBinary(n);
        for (int j = 0; j < bin.size(); ++j) {
            if (bin[j] == '1') cout << j << " ";
        }
        cout << '\n';
    }

    return 0;
}
