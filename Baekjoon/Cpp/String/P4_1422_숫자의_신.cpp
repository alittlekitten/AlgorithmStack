#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 숫자들을 이어붙였을 때 더 큰 수
bool cmp(string a, string b) {
    return a + b > b + a;
}

// 길이가 긴 요소, 혹은 길이가 같으면 int가 큰 요소 반환 (string) - 원래 수를 보존해야한다
string cmp2(string a, string b) {
    string tmp = "";
    if (a.size() == b.size()) {
        if (stoi(a) > stoi(b)) return a;
        else return b;
    }
    else if (a.size() > b.size()) return a;
    else return b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1422 숫자의 신 - 21740과 연결
    // 문자열, 그리디, 정렬

    int k, n, input;
    vector<string> v;
    string maxValue = "";
    cin >> k >> n;
    for (int i = 0; i < k; ++i) {
        cin >> input;
        string s = to_string(input);
        maxValue = cmp2(s, maxValue);
        v.push_back(s);
    }
    for (int i = 0; i < n - k; ++i) {
        v.push_back(maxValue);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
    }

    return 0;
}
