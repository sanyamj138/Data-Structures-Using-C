#include<stdio.h>

int * insertionSort(int * arr, int size, int ele) {
    int i, temp;

    while(arr[i] < ele) {
        i++;
    }
    
    temp = i;

    while(size >= i && arr[i] > ele) {
        arr[size] = arr[size - 1];
        size--;
    }
    arr[temp] = ele;
    return arr;
}

int main() {
    int size, i, arr[50], ele;
    int * sol;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element you want to add: ");
    scanf("%d", &ele);

    sol = insertionSort(arr, size, ele);

    for(i = 0; i <= size; i++) {
        printf("%d ", *sol);
        sol++;
    }   

    return 0;
}