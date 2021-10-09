#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 정렬??
    int n, m;
    string a;
    vector<string> v1; // 듣도 못한 사람
    vector<string> v2; // 듣보잡

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        v1.push_back(a);
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < m; ++i) {
        cin >> a;
        if (binary_search(v1.begin(), v1.end(), a)) v2.push_back(a); // binary_search 함수는 있으면 true 없으면 false를 출력
    }

    // 정렬
    sort(v2.begin(), v2.end());

    cout << v2.size() << "\n";
    for (int i = 0; i < v2.size(); ++i) {
        cout << v2[i] << '\n';
    }

    return 0;
}
