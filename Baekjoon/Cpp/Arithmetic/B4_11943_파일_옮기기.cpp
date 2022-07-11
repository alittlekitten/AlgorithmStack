#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cout.tie(NULL);
    // 11943 파일 옮기기
    // 수학
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if(a + d > b + c) cout << b + c;
    else cout << a + d;

    return 0;
}
