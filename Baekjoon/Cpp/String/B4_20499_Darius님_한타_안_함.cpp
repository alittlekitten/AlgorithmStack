#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    // 20499 Darius님 한타 안 함?
    // 문자열
    
    int k, d, a;
    char c;
    cin >> k >> c >> d >> c >> a;
    if (k + a < d || d == 0)
        cout << "hasu";
    else
        cout << "gosu";
    return 0;
}
