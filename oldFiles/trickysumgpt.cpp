#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long s = 1LL * n * (n + 1) / 2;  // total sum

        // subtract 2 × (sum of powers of 2 ≤ n)
        long long p = 1, powerSum = 0;
        while (p <= n) {
            powerSum += p;
            p *= 2;
        }

        s -= 2 * powerSum;

        cout << s << '\n';
    }
    return 0;
}
