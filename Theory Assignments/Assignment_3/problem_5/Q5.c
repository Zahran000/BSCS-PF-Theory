#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct string {
    char str[100];
};

int main() {
    int end = 1;
    int N_species, supply;
    printf("Enter the number of species: ");
    scanf("%d", &N_species);
    printf("Enter the number of supply: ");
    scanf("%d", &supply);

    struct string **speciesSupplies;
    speciesSupplies = (struct string **)malloc(N_species * sizeof(struct string *));
    for (int i = 0; i < N_species; i++) {
        *(speciesSupplies + i) = (struct string *)malloc((supply + 1) * sizeof(struct string));
    }

    for (int i = 0; i < N_species; i++) {
        for (int j = 0; j < (supply + 1); j++) {
            if (j == 0) printf("Enter the Name of %d species: ", i + 1);
            else printf("Enter %d supply: ", j);
            scanf("%s", (*(speciesSupplies + i) + j)->str);
        }
    }

    while (end) {
        int option;
        printf("\n1. Add\n");
        printf("2. Update\n");
        printf("3. Remove\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                N_species++;
                speciesSupplies = (struct string **)realloc(speciesSupplies, N_species * sizeof(struct string *));
                speciesSupplies[N_species - 1] = (struct string *)malloc((supply + 1) * sizeof(struct string));
                for (int i = 0; i < (supply + 1); i++) {
                    if (i == 0) printf("Enter the Name of %d species: ", N_species);
                    else printf("Enter the %d supply: ", i);
                    scanf("%s", (*(speciesSupplies + N_species - 1) + i)->str);
                }
                break;
            case 2: {
                int index;
                printf("Enter the index (0-%d) which you want to update: ", N_species - 1);
                scanf("%d", &index);
                if (index >= 0 && index < N_species) {
                    for (int i = 0; i < (supply + 1); i++) {
                        if (i == 0) printf("Enter the Name of %d species: ", index + 1);
                        else printf("Enter the %d supply: ", i);
                        scanf("%s", (*(speciesSupplies + index) + i)->str);
                    }
                }
                break;
            }
            case 3: {
                int index;
                printf("Enter the index (0-%d) which you want to remove: ", N_species - 1);
                scanf("%d", &index);
                if (index >= 0 && index < N_species) {
                    for (int i = index; i < N_species - 1; i++) {
                        for (int j = 0; j < (supply + 1); j++) {
                            strcpy((*(speciesSupplies + i) + j)->str, (*(speciesSupplies + i + 1) + j)->str);
                        }
                    }
                    free(speciesSupplies[N_species - 1]);
                    N_species--;
                    speciesSupplies = (struct string **)realloc(speciesSupplies, N_species * sizeof(struct string *));
                }
                break;
            }
            case 4:
                for (int i = 0; i < N_species; i++) {
                    for (int j = 0; j < supply + 1; j++) {
                        if (j == 0) printf("\n%d species (%s):\n", i + 1, (*(speciesSupplies + i))->str);
                        else printf(" %d Supply: %s\n", j, (*(speciesSupplies + i) + j)->str);
                    }
                }
                break;
            case 5:
                end = 0;
                printf("PROGRAM IS ENDED\n");
                break;
        }
    }

    for (int i = 0; i < N_species; i++) {
        free(speciesSupplies[i]);
    }
    free(speciesSupplies);
    return 0;
}
