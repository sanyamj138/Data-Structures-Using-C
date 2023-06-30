#include<stdio.h>

int main() {
    int i, j, size1, size2;
    int arr1[3][3], arr2[3][3];
    int arr3[3][3];

    printf("Enter size of the array1: ");
    scanf("%d", &size1);

    printf("Enter array1 elements: ");

    for(i = 0; i < size1; i++) {
        for(j = 0; j < size1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter size of the array2: ");
    scanf("%d", &size2);

    printf("Enter array2 elements: ");

    for(i = 0; i < size1; i++) {
        for(j = 0; j < size1; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for(i = 0; i < size1; i++) {
        for(j = 0; j < size1; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(i = 0; i < size1; i++) {
        for(j = 0; j < size1; j++) {
            printf("%d ", arr3[i][j]);
        }
    }
}