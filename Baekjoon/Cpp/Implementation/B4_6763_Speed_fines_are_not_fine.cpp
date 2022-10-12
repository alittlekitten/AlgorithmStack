#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 6763 Speed fines are not fine!
    // 구현
    int a, b;
    cin >> a >> b;
    if (a - b >= 0) cout << "Congratulations, you are within the speed limit!";
    else if (a - b >= -20) cout << "You are speeding and your fine is $100.";
    else if (a - b >= -30) cout << "You are speeding and your fine is $270.";
    else cout << "You are speeding and your fine is $500.";
  
    return 0;
}
