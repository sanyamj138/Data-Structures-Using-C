#include<stdio.h>

int sort(int arr[], int low, int high) {
    int pivot;
    int temp;
    int i;

    i = low - 1;

    pivot = arr[high];

    while(low < high) {
        if(pivot > arr[low]) {
            i++;
            temp = arr[low];
            arr[low] = arr[i];
            arr[i] = temp;
        }
        low++;
    }

    temp = arr[i+1];
    arr[i+1] = high;
    high = temp; 

    return i+1;
}

void sorting(int arr[], int low, int high) {
    int temp, i;
    
    if(low < high) {
        temp = sort(arr, low, high);
        sort(arr, low, temp-1);
        sort(arr, temp+1, high);
    }

    for(i = 0; i < high + 1; i++) {
        printf("%d ", arr[i]);
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

    printf("Performing Quick Sort...\n");

    sorting(arr, 0, size-1);

    return 0;
}