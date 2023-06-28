#include<stdio.h>

int sumOf(int arr[], int size, int sum) {
    if(size < 0)
        return 0;

    return sum + sumOf(arr, size - 1, arr[size]);
}

int main() {
    int size, i;
    int arr[50];

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum of the elements of array: %d\n", sumOf(arr, size-1, arr[0]));

    return 0;
}