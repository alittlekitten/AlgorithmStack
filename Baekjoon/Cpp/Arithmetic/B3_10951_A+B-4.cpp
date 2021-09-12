#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    while (cin >> a >> b) // EOF가 오면 while문 정지
        cout << a + b << endl;
}
