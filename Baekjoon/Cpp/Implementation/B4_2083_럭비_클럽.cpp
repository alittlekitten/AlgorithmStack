#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2083 럭비 클럽
    // 구현
    string s;
    int a, b;
    while (1) {
        cin >> s >> a >> b;
        if (s == "#") break;
        if (a > 17 || b >= 80) cout << s << " " << "Senior" << '\n';
        else cout << s << " " << "Junior" << '\n';
    }

    return 0;
}
