#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10101 삼각형 외우기
    // 기하학
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 60 && b == 60 && c == 60) cout << "Equilateral";
    else if ((a == b || b == c || c == a) && a + b + c == 180) cout << "Isosceles";
    else if (a + b + c == 180) cout << "Scalene";
    else cout << "Error";

    return 0;
}
