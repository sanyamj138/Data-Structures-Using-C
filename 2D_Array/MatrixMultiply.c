#include<stdio.h>

int main() {
    int i, j, size1, size2;
    int arr1[3][3], arr2[3][3];
    int arr3[3][3];
    int sum = 0;

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

    for(int k = 0; k < size1; k++) {
        for(int i = 0; i < size2; i++) {
            for(int j = 0; j < size2; j++) {
                sum = (arr1[k][j] * arr2[j][i]) + sum;
            }
            arr3[k][i] = sum;
            sum = 0;
        }
    }
    for(i = 0; i < size1; i++) {
        for(j = 0; j < size1; j++) {
            printf("%d ", arr3[i][j]);
        }
    }
}