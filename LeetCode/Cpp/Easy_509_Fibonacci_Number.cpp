class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        return n > 1 ? fib(n-1) + fib(n-2) : 1;
    }
};
