#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

void countWordOccurrences() {
    char text[MAX_LENGTH];
    char targetWord[100];
    char tempText[MAX_LENGTH];
    char *word;
    int count = 0;
    
    // Read the text
    printf("Enter the text: ");
    fgets(text, MAX_LENGTH, stdin);
    text[strcspn(text, "\n")] = '\0'; // Remove newline character
    
    // Read the word to search for
    printf("Enter the word to count: ");
    scanf("%s", targetWord);
    
    // Convert text to lowercase for case-insensitive comparison
    strcpy(tempText, text);
    for(int i = 0; tempText[i]; i++) {
        tempText[i] = tolower(tempText[i]);
    }
    
    // Convert target word to lowercase
    char tempTarget[100];
    strcpy(tempTarget, targetWord);
    for(int i = 0; tempTarget[i]; i++) {
        tempTarget[i] = tolower(tempTarget[i]);
    }
    
    // Tokenize the text and count occurrences
    word = strtok(tempText, " ,.!?;:\"");
    while(word != NULL) {
        if(strcmp(word, tempTarget) == 0) {
            count++;
        }
        word = strtok(NULL, " ,.!?;:\"");
    }
    
    printf("The word '%s' appears %d times in the text.\n", targetWord, count);
}
