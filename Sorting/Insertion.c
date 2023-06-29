// Insertion with position

#include<stdio.h>

int * insert(int *arr, int size, int pos, int ele) {
    while(size > pos) {
        arr[size] = arr[size-1];
        size--;
    }
    arr[pos] = ele;

    return arr;
}

int main() {
    int size, i, arr[50], ele;
    int *p;
    int pos;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element you want to enter: ");
    scanf("%d", &ele);

    printf("Enter position you want to add element at: ");
    scanf("%d", &pos);

    p = insert(arr, size, pos, ele);

    for(i = 0; i < size; i++) {
        printf("%d ", *p);
        p++;
    }   
    
    return 0;
}