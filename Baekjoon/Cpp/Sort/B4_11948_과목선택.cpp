#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11948 과목선택
    // 정렬
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    vector<int> first;
    vector<int> second;

    first.push_back(a);
    first.push_back(b);
    first.push_back(c);
    first.push_back(d);
    second.push_back(e);
    second.push_back(f);

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    cout << first[3] + first[2] + first[1] + second[1];

    return 0;
}
