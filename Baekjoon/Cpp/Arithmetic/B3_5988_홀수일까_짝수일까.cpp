#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5988 홀수일까 짝수일까
    // 수학
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s[s.size() - 1] == '0' || s[s.size() - 1] == '2' || s[s.size() - 1] == '4' || s[s.size() - 1] == '6' || s[s.size() - 1] == '8') cout << "even\n";
        else cout << "odd\n";
    }

    return 0;
}
