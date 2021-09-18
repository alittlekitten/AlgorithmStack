#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a = 1;
    int b = 1;
    for (int i = n; i > n - k; --i) {
        a *= i;
    }
    for (int i = k; i > 0; --i) {
        b *= i;
    }
    cout << a / b;

    return 0;
}
