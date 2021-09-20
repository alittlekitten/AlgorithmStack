#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string input;
    long long answer = 0;
    int r = 31;
    int m = 1234567891;
    long long multi = 1;
    
    cin >> n >> input;
    for (int i = 0; i < n; ++i) {
        answer += (multi * (input[i] - 96)) % m;
        multi = (multi * 31) % m;
    }
    cout << answer % m;
    
    return 0;
}
