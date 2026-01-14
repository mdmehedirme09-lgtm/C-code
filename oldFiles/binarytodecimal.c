#include <stdio.h>
#include <string.h>

// Decimal to Binary
void decToBin(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    if (n < 0) {
        printf("-");
        n = -n;
    }

    int started = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            started = 1;
        }
        if (started) {
            printf("%d", (n >> i) & 1);
        }
    }
}

// Binary String to Decimal
int binToDec(char *bin) {
    int n = 0;
    int i = 0;
    while (bin[i] != '\0') {
        if (bin[i] != '0' && bin[i] != '1') return -1;
        n = (n << 1) | (bin[i] - '0');
        i++;
    }
    return n;
}

int main() {
    int choice;
    printf("Choose:\n1. Decimal to Binary\n2. Binary to Decimal\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int num;
        printf("Enter decimal number: ");
        scanf("%d", &num);
        printf("Binary: ");
        decToBin(num);
        printf("\n");
    }
    else if (choice == 2) {
        char bin[32];
        printf("Enter binary string: ");
        scanf("%s", bin);
        int dec = binToDec(bin);
        if (dec == -1) {
            printf("Invalid binary input!\n");
        } else {
            printf("Decimal: %d\n", dec);
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}