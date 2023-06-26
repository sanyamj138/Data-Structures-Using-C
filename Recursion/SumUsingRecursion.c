#include<stdio.h>

int sumOfN(int arr[], int size, int sum) {

    if(size < 0)
        return sum;

    return sumOfN(arr, size - 1, arr[size] + sum);
}

int main() {
    int i, size, sum = 0;
    int arr[100];

    printf("Enter Size of the Array: ");
    scanf("%d", &size);

    printf("Enter Array Elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sum = sumOfN(arr, size - 1, sum);

    printf("Sum of the Array: %d\n", sum);

    return 0;
}