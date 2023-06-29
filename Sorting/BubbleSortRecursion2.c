#include<stdio.h>

// Recursive function 
// This function brings the smallest element at the first location
int * bubbleSort(int *arr, int size) {
    int temp;

    if(size - 1 < 0) {
        return 0;
    }

    if(arr[size] < arr[size-1]) {
        temp = arr[size];
        arr[size] = arr[size-1];
        arr[size-1] = temp;
    }

    bubbleSort(arr, size - 1);
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


  	// Calling function for the given number of size
    for(i = 0; i < size - 1; i++) {
        p = bubbleSort(arr, size-1);
    }
    
    for(i = 0; i < size; i++) {
        printf("%d ", *p);
        p++;
    }   
    
    return 0;
}