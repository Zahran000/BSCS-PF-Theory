#include <stdio.h>
#include <string.h>

#define MAX_TRANSACTIONS 100
#define MAX_LENGTH 100

void sortString(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) return 0;

    char temp1[MAX_LENGTH], temp2[MAX_LENGTH];
    strcpy(temp1, str1);
    strcpy(temp2, str2);

    sortString(temp1);
    sortString(temp2);

    return strcmp(temp1, temp2) == 0;
}

void groupScrambledTransactions(char transactions[][MAX_LENGTH], int n) {
    int visited[MAX_TRANSACTIONS] = {0};

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        printf("[\"%s\"", transactions[i]);
        visited[i] = 1;

        for (int j = i + 1; j < n; j++) {
            if (!visited[j] && areAnagrams(transactions[i], transactions[j])) {
                printf(", \"%s\"", transactions[j]);
                visited[j] = 1;
            }
        }
        printf("]\n");
    }
}

int main() {
    char transactions[MAX_TRANSACTIONS][MAX_LENGTH] = {
        "eat", "tea", "tan", "ate", "nat", "bat"
    };
    int n = 6;

    printf("Grouped Transactions:\n");
    groupScrambledTransactions(transactions, n);

    return 0;
}

