#include <iostream>
#include <cmath>

// Iterative GCD using Euclidean algorithm
int gcd(int a, int b) {
    // Handle negative numbers by taking absolute values
    a = std::abs(a);
    b = std::abs(b);
    
    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    
    int result = gcd(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    
    return 0;
}