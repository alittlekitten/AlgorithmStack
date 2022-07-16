#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2864 5와 6의 차이
    // 수학, 그리디
    int a, b, minValue, maxValue;
    string sa, sb;
    cin >> a >> b;
    sa = to_string(a);
    sb = to_string(b);
    
    for (int i = 0; i < sa.size(); ++i) {
        if (sa[i] == '6') sa[i] = '5';
    }
    for (int i = 0; i < sb.size(); ++i) {
        if (sb[i] == '6') sb[i] = '5';
    }

    minValue = stoi(sa) + stoi(sb);

    for (int i = 0; i < sa.size(); ++i) {
        if (sa[i] == '5') sa[i] = '6';
    }
    for (int i = 0; i < sb.size(); ++i) {
        if (sb[i] == '5') sb[i] = '6';
    }

    maxValue = stoi(sa) + stoi(sb);

    cout << minValue << ' ' << maxValue;

    return 0;
}
