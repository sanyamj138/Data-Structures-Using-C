#include<stdio.h>

// With Return And With Arguement
// Without using malloc

// First we have created a pointer function
int * bubbleSort(int *arr, int size) {
    int i, j;
    int temp;

    // Program to perform bubble sort
    for(i = 0; i < size; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Here we are returning the address of the 1st element in array
    return arr;
}


int main() {
    int size, i, arr[50];
    int *b;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("After Performing Bubble Sorting...\n");

    // With Return and With Arguement
    b = bubbleSort(arr, size);

    for(i = 0; i < size; i++) {
        printf("%d ", *b); // We can also print using b1[i]
        b++;
    }    

    return 0;
}