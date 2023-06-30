#include<stdio.h>

int binarySearch(int arr[], int size, int ele) {
    int mid;
    int high = size - 1;
    int low = 0;

    while(low < high) {
        if(arr[mid] == ele)
            return mid;
        else if(arr[mid] > ele)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int size, i, arr[50], ele;
    int sol;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element you want to search: ");
    scanf("%d", &ele);

    sol = binarySearch(arr, size, ele);

    if(sol == -1)
        printf("Element not found");
    else
        printf("Element found at %d position.", sol+1);

        return 0;
}