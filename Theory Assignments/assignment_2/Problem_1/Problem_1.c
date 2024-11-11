#include <stdio.h>

int main() {
    int array[5];
    int smallest, ssmallest;
    int i;

    printf("Input 5 elements in the array (value must be <9999):\n");
    for(i = 0; i < 5; i++) {
        printf("element %d: ", i);
        scanf("%d", &array[i]);
        
        if(array[i] >= 9999) {
            printf("Value must be less than 9999. Please re-enter.\n");
            i--;
            
        }
    }

    if(array[0] < array[1]) {
        smallest = array[0];
        ssmallest = array[1];
    } else {
        smallest = array[1];
        ssmallest = array[0];
    }

    for(i = 2; i < 5; i++) {
        if(array[i] < smallest) {
            ssmallest = smallest;
            smallest = array[i];
        } else if(array[i] < ssmallest && array[i] != smallest) {
            ssmallest = array[i];
        }
    }

    if(smallest == ssmallest) {
        printf("No second smallest element found.\n");
    } else {
        printf("The Second smallest element in the array is: %d\n", ssmallest);
    }

    return 0;
}
newline

