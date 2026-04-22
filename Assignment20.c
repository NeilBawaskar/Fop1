#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr1, *fptr2;
    char c;
    fptr1 = fopen("source.txt", "r");
    if (fptr1 == NULL) {
        printf("Cannot open source.txt. Please create it first.\n");
        return 0;
    }
    fptr2 = fopen("destination.txt", "w");
    c = fgetc(fptr1);
    while (c != EOF) {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    printf("Contents copied to destination.txt\n");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
