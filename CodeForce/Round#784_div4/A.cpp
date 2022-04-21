#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
 
    int n, input;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (input < 1400) cout << "Division 4" << '\n';
        else if (input < 1600) cout << "Division 3" << '\n';
        else if (input < 1900) cout << "Division 2" << '\n';
        else cout << "Division 1" << '\n';
    }
 
    return 0;
}
