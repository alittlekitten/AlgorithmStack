#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    bool chk = true;
    if (n == 1) chk = false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) chk = false;
    }
    if (chk == true) return true;
    return false;
}

int main() {
    int n, input;
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (isPrime(input) == true) cnt++;
    }
    cout << cnt;

    
    return 0;
}
