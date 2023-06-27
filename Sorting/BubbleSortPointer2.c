#include<stdio.h>

// With Return and Without Arguement

int * bubbleSort() {
    int *arr;
    int size, i, j, temp;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

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
    return arr;
}

int main() {

    // With Return and With Arguement
    int size, i;
    int *b; 
    
    printf("Enter size of the array: ");
    scanf("%d", &size);

    b = bubbleSort();

    for(i = 0; i < size; i++) {
        printf("%d ", *b); // We can also print using b2[i]
        b++;
    }   

}