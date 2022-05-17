#include <iostream>
#include <cmath>
using namespace std;

int arr[6];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	// 2477 참외밭
    // 수학
    int n, input1, input2;
    cin >> n;
    for (int i = 0; i < 6; ++i) {
        cin >> input1 >> input2;
        arr[i] = input2;
    }

    int max = -1;
    int maxidx = -1;

    for (int i = 0; i < 6; ++i) {
        if (arr[i % 6] * arr[(i + 1) % 6] > max) {
            max = arr[i % 6] * arr[(i + 1) % 6];
            maxidx = (i + 1) % 6;
        }
    }

    int mixidx = (maxidx + 2) % 6;
    cout << n * (max - arr[mixidx] * (arr[(mixidx + 1) % 6]));

    return 0;
}
