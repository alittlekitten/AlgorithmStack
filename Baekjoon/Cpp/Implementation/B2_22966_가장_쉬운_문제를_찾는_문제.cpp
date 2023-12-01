#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 22966 가장 쉬운 문제를 찾는 문제
    // 구현
    int n, d;
    string s;
    map<int, string> m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s >> d;
        m.insert(make_pair(d, s));
    }
    cout << m.begin()->second;

    return 0;
}
