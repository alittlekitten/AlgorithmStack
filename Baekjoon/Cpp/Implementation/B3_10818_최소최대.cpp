#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int num;
    int max = -1000000;
    int min = 1000000;
    for (int i = 0; i < n; ++i){
        cin >> num;
        if (num > max) max = num;
        if (num < min) min = num;
    }
    cout << min << " " << max;
    
    return 0;
}
