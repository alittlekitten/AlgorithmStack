#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 18411 Exam
    // 수학
    int n;
    vector<int> v;
    for (int i = 0; i < 3; ++i) {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout << v[1] + v[2];

    return 0;
}
