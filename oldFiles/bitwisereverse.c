#include <stdio.h>

int reverse_all_bits(int num) {
    if (num == 0) return 0;  // Special case

    int reversed = 0;
    int bit_length = 0;
    int temp = num;

    // Step 1: Find number of bits needed
    while (temp) {
        temp >>= 1;
        bit_length++;
    }

    // Step 2: Reverse the bits
    for (int i = 0; i < bit_length; i++) {
        int bit = (num >> i) & 1;           // Get i-th bit (LSB first)
        reversed |= (bit << (bit_length - 1 - i)); // Put it in reversed position
    }

    return reversed;
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    int result = reverse_all_bits(num);
    printf("Reversed bits (significant part): %d\n", result);

    return 0;
}