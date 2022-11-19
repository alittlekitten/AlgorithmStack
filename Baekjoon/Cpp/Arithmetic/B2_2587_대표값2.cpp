#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2587 대표값2
    // 수학

    int input;
    int sum = 0;
    vector<int> v;

    for (int i = 0; i < 5; ++i) {
        cin >> input;
        sum += input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    cout << sum / 5 << '\n' << v[2];

    return 0;
}
