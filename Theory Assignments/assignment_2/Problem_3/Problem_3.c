#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

void compressWord(const char *input, char *output, int *removed) {
    int j = 0;
    *removed = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (i == 0 || input[i] != input[i - 1]) {
            output[j++] = input[i];
        } else {
            (*removed)++;
        }
    }

    output[j] = '\0';
}

void compressWords(char words[][MAX_LENGTH], int n, char result[][MAX_LENGTH], int *totalRemoved) {
    int removed = 0;
    *totalRemoved = 0;

    for (int i = 0; i < n; i++) {
        compressWord(words[i], result[i], &removed);
        *totalRemoved += removed;
    }
}

int main() {
    int n;
    char words[MAX_WORDS][MAX_LENGTH];
    char compressedWords[MAX_WORDS][MAX_LENGTH];
    int totalRemoved = 0;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    compressWords(words, n, compressedWords, &totalRemoved);

    printf("Compressed Words:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", compressedWords[i]);
    }

    printf("Total characters removed: %d\n", totalRemoved);

    return 0;
}

