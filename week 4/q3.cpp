#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i, j;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Find end of str1
    for (i = 0; str1[i] != '\0'; i++);

    // Append str2
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }
    str1[i] = '\0';

    printf("Appended string: %s\n", str1);
    return 0;
}