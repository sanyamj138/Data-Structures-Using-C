#include<stdio.h>

int top = -1;
int arr[100];

void append(int data) {
    top++;
    arr[top] = data;
}

void reverse(int size) {
    int x = top;
    int temp, i = 0, j = size - 1;
    while(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }
}

int main() {
    int i;
    int size, data;

    printf("Enter the number of elements you want in stack: ");
    scanf("%d",&size);

    for(i = 0; i < size; i++) {
        scanf("%d",&data);
        append(data);
    }
    
    reverse(size);

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}