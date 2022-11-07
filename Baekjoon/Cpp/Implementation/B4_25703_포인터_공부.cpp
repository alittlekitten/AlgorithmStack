#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 25703 포인터 공부
    // 구현
    int n;
    cin >> n;
    cout << "int a;" << '\n';
    for (int i = 1; i <= n; ++i) {
        string s;
        for (int j = 0; j < i; ++j) {
            s += "*";
        }
        if (i == 1) {
            cout << "int *ptr = &a;" << '\n';
        }
        else {
            if (i == 2) cout << "int " << s << "ptr" << i << " = &ptr;" << '\n';
            else cout << "int " << s << "ptr" << i << " = &ptr" << i - 1 << ";" << '\n';
        }
    }

    return 0;
}
