#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 20053 최소, 최대 2
    // 수학

    int t, n, input;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int max = -1000000;
        int min = 1000000;
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> input;
            if (max < input) max = input;
            if (min > input) min = input;
        }

        cout << min << " " << max << '\n';
    }
  
    return 0;
}
