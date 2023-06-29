#include<stdio.h>

int check(int arr[], int size, int n) {
    int i;

    for(i = 0; i < size; i++) {
        if(arr[i] == n)
            return 1;
    }
    return 0;
}

int main() {
    int size, i, arr[50], n;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter Number to be Found: ");

    scanf("%d", &n);

    printf("%d", check(arr, size, n));

    return 0;
}