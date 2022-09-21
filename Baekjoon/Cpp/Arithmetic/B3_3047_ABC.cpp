#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 3047 ABC
    // 수학
    int arr[3] = { 0 };
    string s;
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    cin >> s;
    cout << arr[s[0] - 65] << " " << arr[s[1] - 65] << " " << arr[s[2] - 65];

    return 0;
}
