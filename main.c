#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int i;  
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
}

int main() {
    char word1[50], word2[50], word3[50];

    printf("Enter the first word: ");
    scanf("%49s", word1);  
    printf("Enter the second word: ");
    scanf("%49s", word2);
    printf("Enter the third word: ");
    scanf("%49s", word3);

    printf("\nReversed words:\n");
    reverseString(word1);
    reverseString(word2);
    reverseString(word3);

    return 0;
}
