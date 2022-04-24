#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2440 별 찍기 - 3
    // 구현
    int n;
    string str;
    cin >> n;
    for (int i = n; i > 0; --i) {
        str = "";
        for (int j = 0; j < i; ++j) {
            str += "*";
        }
        cout << str << '\n';
    }

    return 0;
} 
