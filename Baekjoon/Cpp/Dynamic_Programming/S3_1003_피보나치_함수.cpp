#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, int& a, int& b) {
    if (n == 0) {
        a++;
        return 0;
    }
    else if (n == 1) {
        b++;
        return 1;
    }
    else {
        return fibonacci(n - 1, a, b) + fibonacci(n - 2, a, b);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, input, a, b;
    int fib[41] = {0,1};
    for (int i = 2; i < 41 ; ++i){
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (input == 0) cout << 1 << " " << 0 << '\n';
        else if (input == 1) cout << 0 << " " << 1 << '\n';
        else cout << fib[input - 1] << " " << fib[input] << '\n';
    }
    
    return 0;
}
