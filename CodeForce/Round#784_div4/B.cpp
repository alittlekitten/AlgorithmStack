#include <iostream>
#include <map>
using namespace std;
 
map<int, int> m;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
 
    int tc, n, input;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        m.clear();
        int tmp = -1;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> input;
            m[input]++;
            if (m[input] == 3) {
                tmp = input;
            }
        }
 
        cout << tmp << '\n';
    }
 
    return 0;
}
