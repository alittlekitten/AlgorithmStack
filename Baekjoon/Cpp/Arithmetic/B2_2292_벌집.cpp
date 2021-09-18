#include <iostream>
#include <string>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    int a = 6; // 증가하는양
    int b = 1; // 시작지점
    int cnt = 1;
    
    while (n > b) {
        cnt++;
        b += a;
        a += 6;
    }

    cout << cnt;
    
    return 0;
}
