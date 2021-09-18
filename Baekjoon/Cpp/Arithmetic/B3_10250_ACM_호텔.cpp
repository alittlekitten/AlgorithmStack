#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int total, h, w, n;
    cin >> total;
    for (int i = 0; i < total; ++i) {
        cin >> h >> w >> n;
        cout << (n-1) % h + 1;
        if ((n-1) / h + 1 < 10) cout << 0;
        cout << (n-1) / h + 1 << '\n';
    }

    return 0;
}
