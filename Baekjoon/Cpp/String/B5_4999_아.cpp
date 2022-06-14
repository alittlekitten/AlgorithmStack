#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 4999 아
    // 문자열
    string a, b;
    cin >> a >> b;
    if (a.size() >= b.size()) cout << "go";
    else cout << "no";

    return 0;
}
