#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    int num;

    src = fopen("source.bin", "rb");
    if (!src) {
        perror("Error opening source file");
        return 1;
    }

    dest = fopen("third_elements.bin", "wb");
    if (!dest) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    // Jump to the 3rd element: skip first two integers
    // Each int is sizeof(int) bytes, so to get every 3rd:
    // read one, then skip two each time
    while (fread(&num, sizeof(int), 1, src) == 1) {
        fwrite(&num, sizeof(int), 1, dest);
        // Skip next two integers
        fseek(src, sizeof(int) * 2, SEEK_CUR);
    }

    fclose(src);
    fclose(dest);
    printf("Every third integer copied to third_elements.bin\n");

    return 0;
}

