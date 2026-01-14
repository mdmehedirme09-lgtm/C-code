#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;
    
    // Swap characters from both ends moving towards center
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello World";
    printf("Original: %s\n", str);
    
    reverseString(str);
    printf("Reversed: %s\n", str);
    
    return 0;
}