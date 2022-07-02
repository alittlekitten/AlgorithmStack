#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toBinary(long long n) {
    string r;
    while (n != 0) {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    reverse(r.begin(), r.end());
    return r;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10829 이진수 변환
    // 수학

    long long n;
    cin >> n;
    cout << toBinary(n);

    return 0;
}
