class Solution {
public:
    const long long mod = 1000000007;

    long long power(long long x, long long n) {
        if (n == 0)
            return 1;

        if (n % 2 == 0)
            return power((x * x) % mod, n / 2);

        return (x * power((x * x) % mod, n / 2)) % mod;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (power(5, even) * power(4, odd)) % mod;
    }
};