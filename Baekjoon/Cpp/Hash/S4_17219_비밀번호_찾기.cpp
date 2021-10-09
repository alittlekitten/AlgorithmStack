#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string a, b;
    map<string, string> mm;

    for (int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;
        mm[a] = b;
    }

    string c;
    for (int i = 0; i < m; ++i) {
        cin >> c;
        cout << mm[c] << '\n';
    }

    return 0;
}
