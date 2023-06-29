#include<stdio.h>

void bubbleSort(int arr[], int size, int i, int j) {
    int temp;

    if(i < size) {
        if(j < size) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }      
            bubbleSort(arr, size, i, j+1);
        }
        bubbleSort(arr, size, i+1, 0);
    }
}

int main() {
    int size, i, arr[50];
    int *p;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size, 0, 0);

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }   
    
    return 0;
}