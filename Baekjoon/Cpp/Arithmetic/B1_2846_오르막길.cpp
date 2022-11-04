#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2846 오르막길
    // 수학
    int n;
    cin >> n;
    
    int maxNum = 0;
    
    int arr[1001];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int minN = arr[0];
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] - arr[i-1] > 0) {
            if (maxNum < arr[i] - minN) {
                maxNum = arr[i] - minN;
            }
        } 
        else {
            minN = arr[i];    
        }
    }
    
    cout << maxNum;

    return 0;
}
