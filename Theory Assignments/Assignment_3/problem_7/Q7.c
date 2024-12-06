#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_USERS 100
#define MAX_CATEGORIES 10
#define MAX_DEVICES 5
#define MAX_CONTENT 20

typedef struct {
    char title[50];
    float rating;
    int runtime; 
    char encoding[20];
} ContentMetadata;
double** initializeEngagementMatrix(int users, int categories) {
    double** matrix = (double**)malloc(users * sizeof(double*));
    for (int i = 0; i < users; i++) {
        matrix[i] = (double*)calloc(categories, sizeof(double));
    }
    return matrix;
}

double** initializeDeviceMatrix(int users, int devices) {
    double** matrix = (double**)malloc(users * sizeof(double*));
    for (int i = 0; i < users; i++) {
        matrix[i] = (double*)calloc(devices, sizeof(double));
    }
    return matrix;
}

ContentMetadata** initializeContentMetadata(int categories, int contentPerCategory) {
    ContentMetadata** metadata = (ContentMetadata**)malloc(categories * sizeof(ContentMetadata*));
    for (int i = 0; i < categories; i++) {
        metadata[i] = (ContentMetadata*)malloc(contentPerCategory * sizeof(ContentMetadata));
    }
    return metadata;
}
void updateEngagementMatrix(double** engagementMatrix, int userIndex, int categoryIndex, double value) {
    engagementMatrix[userIndex][categoryIndex] = value;
}

void updateDeviceMatrix(double** deviceMatrix, int userIndex, int deviceIndex, double value) {
    deviceMatrix[userIndex][deviceIndex] = value;
}
void addContentMetadata(ContentMetadata** metadata, int categoryIndex, int contentIndex, 
                        const char* title, float rating, int runtime, const char* encoding) {
    strcpy(metadata[categoryIndex][contentIndex].title, title);
    metadata[categoryIndex][contentIndex].rating = rating;
    metadata[categoryIndex][contentIndex].runtime = runtime;
    strcpy(metadata[categoryIndex][contentIndex].encoding, encoding);
}
void printEngagementMatrix(double** matrix, int users, int categories) {
    printf("Engagement Matrix:\n");
    for (int i = 0; i < users; i++) {
        for (int j = 0; j < categories; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int users = 5;
    int categories = 3;
    int devices = 2;
    int contentPerCategory = 4;
    double** engagementMatrix = initializeEngagementMatrix(users, categories);
    double** deviceMatrix = initializeDeviceMatrix(users, devices);
    ContentMetadata** metadata = initializeContentMetadata(categories, contentPerCategory);
    updateEngagementMatrix(engagementMatrix, 0, 1, 4.5);
    updateDeviceMatrix(deviceMatrix, 0, 0, 1.0);
    addContentMetadata(metadata, 0, 0, "Movie A", 4.8, 120, "HD");
    printEngagementMatrix(engagementMatrix, users, categories);
    for (int i = 0; i < users; i++) {
        free(engagementMatrix[i]);
        free(deviceMatrix[i]);
    }
    free(engagementMatrix);
    free(deviceMatrix);

    for (int i = 0; i < categories; i++) {
        free(metadata[i]);
    }
    free(metadata);

    return 0;
}
