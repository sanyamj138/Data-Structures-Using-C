#include<stdio.h>

void merging(int arr1[], int arr2[], int size1, int size2) {
    int i = 0, j = 0, k = 0;
    int arr[size1 + size2];

    while(i < size1) {
        arr[k] = arr1[i];
        k++;i++;
    }

    while(j < size2) {
        arr[k] = arr2[j];
        k++;j++;
    }

    printf("\nModified Array: ");
    for(i = 0; i < size1 + size2; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int size1, size2, i;
    int arr1[20], arr2[20];

    printf("Enter size of the array1: ");
    scanf("%d", &size1);

    printf("Enter array1 elements: ");

    for(i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of the array2: ");
    scanf("%d", &size2);

    printf("Enter array2 elements: ");

    for(i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    merging(arr1, arr2, size1, size2);
}