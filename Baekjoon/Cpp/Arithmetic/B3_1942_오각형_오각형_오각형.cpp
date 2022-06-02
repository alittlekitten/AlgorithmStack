#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1964 오각형, 오각형, 오각형...
    // 수학

    int n;
    cin >> n;
    
    int sum = 5;
    int add = 7;

    for (int i = 0; i < n - 1; ++i) {
        sum = (sum + add) % 45678;
        add += 3;
    }

    cout << sum;

    return 0;
}
