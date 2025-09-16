#include <stdio.h>

int main() {
    char text[500];
    int i, chars = 0, words = 0, lines = 0;

    printf("Enter text (end with $ symbol):\n");
    gets(text);

    for (i = 0; text[i] != '$'; i++) {
        chars++;

        if (text[i] == ' ' || text[i] == '\n' || text[i+1] == '$')
            words++;

        if (text[i] == '\n')
            lines++;
    }

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines + 1);

    return 0;
}