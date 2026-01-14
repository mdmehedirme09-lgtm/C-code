#include <bits/stdc++.h>
using namespace std;

int checkk(int n) {
    if (n < 2) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) { // handle even numbers first
        return 0;
    }
    // Now check odd divisors from 3 onward
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; // if no divisor found, it's prime
}

int primee(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++) { // include i == n
        if (n % i == 0) {
            if (checkk(i)) {
                ans++;
            }
        }
    }
    if (ans == 2) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) { // include i == n
        if (n % i == 0) {
            if (primee(i)) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}