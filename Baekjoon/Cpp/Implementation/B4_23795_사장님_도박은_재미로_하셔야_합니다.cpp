#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 23795 사장님 도박은 재미로 하셔야 합니다
    // 구현
    int n;
    int sum = 0;
    while (1) {
        cin >> n;
        if (n != -1) sum += n;
        else break;
    }
    cout << sum;

    return 0;
}