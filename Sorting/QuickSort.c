#include<stdio.h>

int * sorting(int *arr, int low, int high) {
    int i = low;
    int j = high - 1;
    int temp;
    
    while(i <= j) {
        if(arr[i] < arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j--;
        }
        else if(arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
        }
    }

    sorting(arr, low, i);
    sorting(arr, j, high);

    return arr;
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

    printf("Performing Quick Sort...");

    p = sorting(arr, 0, size-1);

    for(i = 0; i < size; i++) {
        printf("%d ", *p);
        p++;
    }   

    return 0;
}