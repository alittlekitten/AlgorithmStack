#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    int sum1 = 0;
    int sum2 = 0;
    cin >> a >> b >> c >> d;
    sum1 = a+b+c+d;
    cin >> a >> b >> c >> d;
    sum2 = a+b+c+d;
    
    if (sum1 > sum2) cout << sum1;
    else cout << sum2;
    
    return 0;
}
