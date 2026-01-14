#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], largest[50] = "";
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if exists
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; // End of current word
            if (strlen(word) > strlen(largest)) {
                strcpy(largest, word);
            }
            j = 0; // Reset for next word
        }
    }

    printf("Largest word: %s\n", largest);
    return 0;
}
