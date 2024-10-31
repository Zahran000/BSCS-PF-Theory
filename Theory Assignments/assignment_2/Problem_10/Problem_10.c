
#include<stdio.h>

int main(){
    int outerSpace, num, innerSpace1, stars, row, col, innerSpace2;

    printf("Enter any number: ");
    scanf("%d", &num);

    outerSpace = (num * 2) - 2;
    innerSpace1 = 0;

    for(row = 0; row < num - 1; row++){
        for(col = 0; col < outerSpace; col++){
            printf(" ");
        }
        printf("*");
        for(innerSpace2 = 0; innerSpace2 < innerSpace1; innerSpace2++){
            printf(" ");
        }

        if(innerSpace2 != 0)
            printf("*");
        
        printf("\n");

        outerSpace--;
        if(row == 0)
            innerSpace1++;
        else
            innerSpace1 += 2;
    }

    for(row = 0; row < num; row++){
        printf("*");
    }

    for(row = 0; row < innerSpace1; row++){
        printf(" ");
    }

    for(row = 0; row < num; row++){
        printf("*");
    }

    printf("\n");
    innerSpace1 = (innerSpace1 * 2) - 1;
    outerSpace = 1;

    for(row = 0; row < num - 1; row++){
        for(col = 0; col < outerSpace; col++){
            printf(" ");
        }
        printf("*");
        for(innerSpace2 = 0; innerSpace2 < innerSpace1; innerSpace2++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        innerSpace1 -= 2;
        outerSpace++;
    }

    outerSpace = num - 2;
    innerSpace1 = 1;
    for(row = 0; row < num - 2; row++){
        for(col = 0; col < outerSpace; col++){
            printf(" ");
        }
        printf("*");
        for(innerSpace2 = 0; innerSpace2 < outerSpace; innerSpace2++){
            printf(" ");
        }
        printf("*");
        for(col = 0; col < innerSpace1; col++){
            printf(" ");
        }
        printf("*");
        for(col = 0; col < outerSpace; col++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        outerSpace--;
        innerSpace1 += 4;
    }

    innerSpace1 += 2;
    printf("*");
    for(col = 0; col < innerSpace1; col++){
        printf(" ");
    }
    printf("*");
    return 0;
}

