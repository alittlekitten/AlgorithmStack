#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 17010 Time to Decompress
    // 구현
    int n, input;
    char c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input >> c;
        for (int j = 0; j < input; ++j) {
            cout << c;
        }
        cout << '\n';
    }

	return 0;
}
